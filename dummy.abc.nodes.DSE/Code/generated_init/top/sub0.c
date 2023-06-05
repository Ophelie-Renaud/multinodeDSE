//
// Created by orenaud on 30/05/23.
//
// no monitoring by default
#define _PREESM_NBTHREADS_ 4
#define _PREESM_MAIN_THREAD_ 0

// application dependent includes
#include "preesm_gen.h"

#include "sub0.h"

// Declare computation thread functions
void* computationThread_Core0(uchar *outA0, uchar *outB0, uchar *outD0);
void* computationThread_Core1(uchar *outA0, uchar *outB0, uchar *outD0);
void* computationThread_Core2(uchar *outA0, uchar *outB0, uchar *outD0);
void* computationThread_Core3(uchar *outA0, uchar *outB0, uchar *outD0);

#ifndef _WIN32
#include <execinfo.h>
#endif
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef _WIN32
void handler_0(int sig) {
    void *array[30];
    size_t size;
    size = backtrace(array, 30);
    fprintf(stderr, "Error: signal %d:\n", sig);
    backtrace_symbols_fd(array, size, STDERR_FILENO);
    exit(1);
}
#endif
pthread_barrier_t iter_barrier_0;

#ifdef PREESM_MD5_UPDATE
struct rk_sema preesmPrintSema;
#endif
unsigned int launch_0(unsigned int core_id, pthread_t *thread, void* (*start_routine)(void*)) {

    // init pthread attributes
    pthread_attr_t attr;
    pthread_attr_init(&attr);

#ifndef PREESM_NO_AFFINITY
#ifdef _WIN32
    SYSTEM_INFO sysinfo;
			GetSystemInfo(&sysinfo);
			unsigned int numCPU = sysinfo.dwNumberOfProcessors;
#else
    unsigned int numCPU = sysconf(_SC_NPROCESSORS_ONLN);
#endif

    // check CPU id is valid
    if (core_id >= numCPU) {
        // leave attribute uninitialized
        printf(
                "** Warning: thread %d will not be set with specific core affinity \n   due to the lack of available dedicated cores.\n",
                core_id);
    } else {
#if defined __APPLE__ || defined _WIN32
        // NOT SUPPORTED
#else
        // init cpuset struct
        cpu_set_t cpuset;
        CPU_ZERO(&cpuset);
        CPU_SET(core_id, &cpuset);

        // set pthread affinity
        pthread_attr_setaffinity_np(&attr, sizeof(cpuset), &cpuset);
#endif
    }
#endif

    // create thread
    pthread_create(thread, &attr, start_routine, NULL);
    return 0;
}
void sub0(uchar *outA0, uchar *outB0, uchar *outD0){
#ifndef _WIN32
    signal(SIGSEGV, handler_0);
    signal(SIGPIPE, handler_0);
#endif
    // Set affinity of main thread to proper core ID
#ifndef PREESM_NO_AFFINITY
#if defined __APPLE__ || defined _WIN32
    // NOT SUPPORTED
#else
    cpu_set_t cpuset;
    CPU_ZERO(&cpuset);
    CPU_SET(_PREESM_MAIN_THREAD_, &cpuset);
    sched_setaffinity(getpid(), sizeof(cpuset), &cpuset);

#endif
#endif

    // Declaring thread pointers
    pthread_t coreThreads[_PREESM_NBTHREADS_];
    void* (*coreThreadComputations[_PREESM_NBTHREADS_])(void*) = {
            computationThread_Core0(outA0,outB0,outD0), computationThread_Core1(outA0,outB0,outD0), computationThread_Core2(outA0,outB0,outD0),computationThread_Core3(outA0,outB0,outD0)
    };
#ifdef PREESM_VERBOSE
    printf("Launched main\n");
#endif
    // Creating a synchronization barrier

    pthread_barrier_init(&iter_barrier_0, NULL, _PREESM_NBTHREADS_);
#ifdef PREESM_MD5_UPDATE
    rk_sema_init(&preesmPrintSema, 1);
#endif
    communicationInit();

    // Creating threads
    for (int i = 0; i < _PREESM_NBTHREADS_; i++) {
        if (i != _PREESM_MAIN_THREAD_) {
            if (launch_0(i, &coreThreads[i], coreThreadComputations[i])) {
                printf("Error: could not launch thread %d\n", i);
                break;
            }
        }
    }

    // run main operator code in this thread
    coreThreadComputations[_PREESM_MAIN_THREAD_](NULL);

    // Waiting for thread terminations
    for (int i = 0; i < _PREESM_NBTHREADS_; i++) {
        if (i != _PREESM_MAIN_THREAD_) {
            pthread_join(coreThreads[i], NULL);
        }
    }
}