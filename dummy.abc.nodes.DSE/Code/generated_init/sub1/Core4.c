/**
 * @file Core4.c
 * @generated by CPrinter
 * @date Thu Jun 01 11:28:59 CEST 2023
 *
 * Code generated for processing element Core4 (ID=4).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

extern char Shared[95]; //  size:= 95*char
extern char *const FIFO_Head_B_18_end_back__B_19_init_feed__0; // FIFO_Head_B_18_end_back > B_19_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__1;  // B_19_init_feed_feed > B_19_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_B_21_end_back__B_22_init_feed__0; // FIFO_Head_B_21_end_back > B_22_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__4;  // B_22_init_feed_feed > B_22_0_feed size:= 1*uchar defined in Core0
extern char *const B_22_init_feed__B_22_0__0;  // B_22_init_feed > B_22_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_24_end_back__B_25_init_feed__0; // FIFO_Head_B_24_end_back > B_25_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__7;  // B_25_init_feed_feed > B_25_0_feed size:= 1*uchar defined in Core0
extern char *const B_25_init_feed__B_25_0__0;  // B_25_init_feed > B_25_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_27_end_back__B_28_init_feed__0; // FIFO_Head_B_27_end_back > B_28_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__10;  // B_28_init_feed_feed > B_28_0_feed size:= 1*uchar defined in Core0
extern char *const B_28_init_feed__B_28_0__0;  // B_28_init_feed > B_28_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_30_end_back__B_31_init_feed__0; // FIFO_Head_B_30_end_back > B_31_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__13;  // B_31_init_feed_feed > B_31_0_feed size:= 1*uchar defined in Core0
extern char *const B_31_init_feed__B_31_0__0;  // B_31_init_feed > B_31_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_35_end_back__B_36_init_feed__0; // FIFO_Head_B_35_end_back > B_36_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__17;  // B_36_init_feed_feed > B_36_0_feed size:= 1*uchar defined in Core0
extern char *const B_36_init_feed__B_36_0__0;  // B_36_init_feed > B_36_0 size:= 1*char defined in Core0
extern char *const frk_0__B_19_0__0;  // frk_0 > B_19_0 size:= 1*char defined in Core0
extern uchar *const newPort2_02__inB__0;  // frk_0_newPort2_02 > B_19_0_inB size:= 1*uchar defined in Core0
extern uchar *const outB__newPort2_02__0;  // B_19_0_outB > jn_0_newPort2_02 size:= 1*uchar defined in Core0
extern uchar *const back__back__3;  // B_19_0_back > B_19_end_back_back size:= 1*uchar defined in Core0
extern char *const B_19_0__B_19_end_back__0;  // B_19_0 > B_19_end_back size:= 1*char defined in Core0
extern char *const B_19_0__jn_0__0;  // B_19_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_24_init_feed__B_24_0__0;  // B_24_init_feed > B_24_0 size:= 1*char defined in Core0
extern char *const frk_0__B_24_0__0;  // frk_0 > B_24_0 size:= 1*char defined in Core0
extern uchar *const newPort7_07__inB__0;  // frk_0_newPort7_07 > B_24_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__6;  // B_24_init_feed_feed > B_24_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort7_07__0;  // B_24_0_outB > jn_0_newPort7_07 size:= 1*uchar defined in Core0
extern uchar *const back__back__8;  // B_24_0_back > B_24_end_back_back size:= 1*uchar defined in Core0
extern char *const B_24_0__jn_0__0;  // B_24_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_30_init_feed__B_30_0__0;  // B_30_init_feed > B_30_0 size:= 1*char defined in Core0
extern char *const frk_0__B_30_0__0;  // frk_0 > B_30_0 size:= 1*char defined in Core0
extern uchar *const newPort13_13__inB__0;  // frk_0_newPort13_13 > B_30_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__12;  // B_30_init_feed_feed > B_30_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort13_13__0;  // B_30_0_outB > jn_0_newPort13_13 size:= 1*uchar defined in Core0
extern uchar *const back__back__13;  // B_30_0_back > B_30_end_back_back size:= 1*uchar defined in Core0
extern char *const B_30_0__jn_0__0;  // B_30_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_37_init_feed__B_37_0__0;  // B_37_init_feed > B_37_0 size:= 1*char defined in Core0
extern char *const frk_0__B_37_0__0;  // frk_0 > B_37_0 size:= 1*char defined in Core0
extern uchar *const newPort20_20__inB__0;  // frk_0_newPort20_20 > B_37_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__18;  // B_37_init_feed_feed > B_37_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort20_20__0;  // B_37_0_outB > jn_0_newPort20_20 size:= 1*uchar defined in Core0
extern uchar *const back__back__18;  // B_37_0_back > B_37_end_back_back size:= 1*uchar defined in Core0
extern char *const B_37_0__B_37_end_back__0;  // B_37_0 > B_37_end_back size:= 1*char defined in Core0
extern char *const B_37_0__jn_0__0;  // B_37_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_18_0__B_18_end_back__0;  // B_18_0 > B_18_end_back size:= 1*char defined in Core0
extern uchar *const back__back__2;  // B_18_0_back > B_18_end_back_back size:= 1*uchar defined in Core0
extern char *const B_21_0__B_21_end_back__0;  // B_21_0 > B_21_end_back size:= 1*char defined in Core0
extern uchar *const back__back__5;  // B_21_0_back > B_21_end_back_back size:= 1*uchar defined in Core0
extern char *const B_27_0__B_27_end_back__0;  // B_27_0 > B_27_end_back size:= 1*char defined in Core0
extern uchar *const back__back__10;  // B_27_0_back > B_27_end_back_back size:= 1*uchar defined in Core0
extern char *const B_35_0__B_35_end_back__0;  // B_35_0 > B_35_end_back size:= 1*char defined in Core0
extern uchar *const back__back__16;  // B_35_0_back > B_35_end_back_back size:= 1*uchar defined in Core0

void* computationThread_Core4(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  fifoInit(FIFO_Head_B_18_end_back__B_19_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_21_end_back__B_22_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_24_end_back__B_25_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_27_end_back__B_28_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_30_end_back__B_31_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_35_end_back__B_36_init_feed__0, 1, NULL, 0); // 1 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    fifoPop(feed__feed__1, FIFO_Head_B_18_end_back__B_19_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed__4, FIFO_Head_B_21_end_back__B_22_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(4, 2); // Core4 > Core2
    sendEnd(); // Core4 > Core2
    fifoPop(feed__feed__7, FIFO_Head_B_24_end_back__B_25_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(4, 5); // Core4 > Core5
    sendEnd(); // Core4 > Core5
    fifoPop(feed__feed__10, FIFO_Head_B_27_end_back__B_28_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(4, 2); // Core4 > Core2
    sendEnd(); // Core4 > Core2
    fifoPop(feed__feed__13, FIFO_Head_B_30_end_back__B_31_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(4, 5); // Core4 > Core5
    sendEnd(); // Core4 > Core5
    fifoPop(feed__feed__17, FIFO_Head_B_35_end_back__B_36_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(4, 3); // Core4 > Core3
    sendEnd(); // Core4 > Core3
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    B(newPort2_02__inB__0, feed__feed__1, outB__newPort2_02__0, back__back__3); // B_19_0

    sendStart(4, 5); // Core4 > Core5
    sendEnd(); // Core4 > Core5
    sendStart(4, 0); // Core4 > Core0
    sendEnd(); // Core4 > Core0
    receiveStart(); // Core3 > Core4
    receiveEnd(3, 4); // Core3 > Core4
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    B(newPort7_07__inB__0, feed__feed__6, outB__newPort7_07__0, back__back__8); // B_24_0

    sendStart(4, 0); // Core4 > Core0
    sendEnd(); // Core4 > Core0
    receiveStart(); // Core3 > Core4
    receiveEnd(3, 4); // Core3 > Core4
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    B(newPort13_13__inB__0, feed__feed__12, outB__newPort13_13__0, back__back__13); // B_30_0

    sendStart(4, 0); // Core4 > Core0
    sendEnd(); // Core4 > Core0
    receiveStart(); // Core5 > Core4
    receiveEnd(5, 4); // Core5 > Core4
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    B(newPort20_20__inB__0, feed__feed__18, outB__newPort20_20__0, back__back__18); // B_37_0

    sendStart(4, 3); // Core4 > Core3
    sendEnd(); // Core4 > Core3
    sendStart(4, 0); // Core4 > Core0
    sendEnd(); // Core4 > Core0
    receiveStart(); // Core3 > Core4
    receiveEnd(3, 4); // Core3 > Core4
    fifoPush(back__back__2, FIFO_Head_B_18_end_back__B_19_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core1 > Core4
    receiveEnd(1, 4); // Core1 > Core4
    fifoPush(back__back__5, FIFO_Head_B_21_end_back__B_22_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPush(back__back__8, FIFO_Head_B_24_end_back__B_25_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core1 > Core4
    receiveEnd(1, 4); // Core1 > Core4
    fifoPush(back__back__10, FIFO_Head_B_27_end_back__B_28_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPush(back__back__13, FIFO_Head_B_30_end_back__B_31_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core2 > Core4
    receiveEnd(2, 4); // Core2 > Core4
    fifoPush(back__back__16, FIFO_Head_B_35_end_back__B_36_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}
