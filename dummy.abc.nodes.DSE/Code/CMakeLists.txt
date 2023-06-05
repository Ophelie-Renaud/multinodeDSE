cmake_minimum_required(VERSION 3.25)
project(MPI_project_ABC C)

set(CMAKE_C_STANDARD 11)
# *******************************************
# ************ MPI LIBRARY **************
# *******************************************
find_package(MPI REQUIRED)

# *******************************************
# ************ Pthread LIBRARY **************
# *******************************************
if (WIN32)
    set(THREADS_USE_PTHREADS_WIN32 true)
    # pthread included AFTER Sdl to avoid unnecessary warnings
    file(GLOB PTHREADDIR "${LIBS_DIR}/pthread-[\\.|0-9]*")
    set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${PTHREADDIR})
    Find_Package ( THREADS REQUIRED )
else()
    Find_Package ( Threads )
endif()

if(NOT THREADS_FOUND)
    MESSAGE(FATAL_ERROR "Pthread not found !")
endif()


if (WIN32)
    file(GLOB
            PTHREADS_DLL
            ${CMAKE_PREFIX_PATH}/lib/*.dll
            )

    MESSAGE("Copy Pthreads DLLs into ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
    if(NOT ${CMAKE_GENERATOR} MATCHES "Visual Studio.*")
        file(COPY ${PTHREADS_DLL} DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
    else()
        file(COPY ${PTHREADS_DLL} DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Debug)
        file(COPY ${PTHREADS_DLL} DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Release)
    endif()
endif()
# *******************************************
# **************** MPI_project_ABC.exe  ****************
# *******************************************
include_directories(SYSTEM ${MPI_INCLUDE_PATH}${THREADS_PTHREADS_INCLUDE_DIR})
add_executable(MPI_project_ABC main.c fifo.c sub0.c sub0.h core0.c core1.c core2.c core3.c sub1.c core4.c core5.c core6.c core7.c core8.c core9.c sub2.c core10.c core11.c core12.c core13.c core14.c core15.c code.c preesm_md5.c mac_barrier.c dump.c communication.c)
target_link_libraries(MPI_project_ABC ${MPI_C_LIBRARIES}${CMAKE_THREAD_LIBS_INIT})