#include <stdio.h>
#include <mpi.h>
#include "stdlib.h"

#include "fifo.h"
#include "preesm.h"
#include "sub0.h"
#include "sub1.h"
#include "sub2.h"

int initNode0;
int initNode1;
int initNode2;
int main(int argc, char **argv) {
    //local buffer
    uchar* outA0 = (uchar*)malloc(sizeof(uchar)*(43));
    uchar* outB0 = (uchar*)malloc(sizeof(uchar)*(17));
    uchar* outD0 = (uchar*)malloc(sizeof(uchar)*(1));
    uchar* outA1= (uchar*)malloc(sizeof(uchar)*(20));
    uchar* outB1 = (uchar*)malloc(sizeof(uchar)*(23));
    uchar* outD1 = (uchar*)malloc(sizeof(uchar)*(1));
    int preesmStopThreads = 3;
    initNode0 = 1;
    initNode1 = 1;
    initNode2 = 1;

    // Initialize the MPI environment
    MPI_Init(NULL, NULL);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);
    // Print off a hello world message
    printf("Processor %s, rank %d out of %d processors\n",
           processor_name, world_rank, world_size);

    while(preesmStopThreads) {
        preesmStopThreads = preesmStopThreads-1;

        if (world_rank == 0) {
            sub0(outA0, outB0, outD0);
            MPI_Ssend(&outA0, 43, MPI_UNSIGNED_CHAR, 1, 0, MPI_COMM_WORLD);
            MPI_Ssend(&outB0, 17, MPI_UNSIGNED_CHAR, 1, 0, MPI_COMM_WORLD);
            MPI_Ssend(&outD0, 1, MPI_UNSIGNED_CHAR, 1, 0, MPI_COMM_WORLD);
            initNode0 = 0;

        } else if (world_rank == 1) {
            MPI_Recv(&outA0, 43, MPI_UNSIGNED_CHAR, 0, MPI_ANY_TAG, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);
            MPI_Recv(&outD0, 1, MPI_UNSIGNED_CHAR, 0, MPI_ANY_TAG, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);
            sub1(outA0, outD0, outA1, outB1, outD1);
            MPI_Ssend(&outA1, 20, MPI_UNSIGNED_CHAR, 1, 0, MPI_COMM_WORLD);
            MPI_Ssend(&outB1, 23, MPI_UNSIGNED_CHAR, 1, 0, MPI_COMM_WORLD);
            MPI_Ssend(&outD1, 1, MPI_UNSIGNED_CHAR, 1, 0, MPI_COMM_WORLD);
            initNode1 = 0;
        } else if (world_rank == 2) {
            MPI_Recv(&outA1, 20, MPI_UNSIGNED_CHAR, 0, MPI_ANY_TAG, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);
            MPI_Recv(&outB0, 17, MPI_UNSIGNED_CHAR, 0, MPI_ANY_TAG, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);
            MPI_Recv(&outB1, 23, MPI_UNSIGNED_CHAR, 0, MPI_ANY_TAG, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);
            MPI_Recv(&outD1, 1, MPI_UNSIGNED_CHAR, 0, MPI_ANY_TAG, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);
            sub2(outA1, outB0, outB1, outD1);
            initNode2 = 0;
        }

    }
    free(outA0);
    free(outB0);
    free(outD0);
    free(outA1);
    free(outB1);
    free(outD1);
    //MPI_Barrier(MPI_COMM_WORLD);
    // Finalize the MPI environment.
    MPI_Finalize();
    return 0;
}

