/**
 * @file Core3.c
 * @generated by CPrinter
 * @date Thu Jun 01 11:28:59 CEST 2023
 *
 * Code generated for processing element Core3 (ID=3).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

extern char Shared[95]; //  size:= 95*char
extern char *const FIFO_Head_B_20_end_back__B_21_init_feed__0; // FIFO_Head_B_20_end_back > B_21_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__3;  // B_21_init_feed_feed > B_21_0_feed size:= 1*uchar defined in Core0
extern char *const B_21_init_feed__B_21_0__0;  // B_21_init_feed > B_21_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_23_end_back__B_24_init_feed__0; // FIFO_Head_B_23_end_back > B_24_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__6;  // B_24_init_feed_feed > B_24_0_feed size:= 1*uchar defined in Core0
extern char *const B_24_init_feed__B_24_0__0;  // B_24_init_feed > B_24_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_26_end_back__B_27_init_feed__0; // FIFO_Head_B_26_end_back > B_27_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__9;  // B_27_init_feed_feed > B_27_0_feed size:= 1*uchar defined in Core0
extern char *const B_27_init_feed__B_27_0__0;  // B_27_init_feed > B_27_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_29_end_back__B_30_init_feed__0; // FIFO_Head_B_29_end_back > B_30_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__12;  // B_30_init_feed_feed > B_30_0_feed size:= 1*uchar defined in Core0
extern char *const B_30_init_feed__B_30_0__0;  // B_30_init_feed > B_30_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_34_end_back__B_35_init_feed__0; // FIFO_Head_B_34_end_back > B_35_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__16;  // B_35_init_feed_feed > B_35_0_feed size:= 1*uchar defined in Core0
extern char *const B_35_init_feed__B_35_0__0;  // B_35_init_feed > B_35_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_37_end_back__B_38_init_feed__0; // FIFO_Head_B_37_end_back > B_38_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__19;  // B_38_init_feed_feed > B_38_0_feed size:= 1*uchar defined in Core0
extern char *const B_38_init_feed__B_38_0__0;  // B_38_init_feed > B_38_0 size:= 1*char defined in Core0
extern char *const B_18_init_feed__B_18_0__0;  // B_18_init_feed > B_18_0 size:= 1*char defined in Core0
extern char *const frk_0__B_18_0__0;  // frk_0 > B_18_0 size:= 1*char defined in Core0
extern uchar *const newPort1_01__inB__0;  // frk_0_newPort1_01 > B_18_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__0;  // B_18_init_feed_feed > B_18_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort1_01__0;  // B_18_0_outB > jn_0_newPort1_01 size:= 1*uchar defined in Core0
extern uchar *const back__back__2;  // B_18_0_back > B_18_end_back_back size:= 1*uchar defined in Core0
extern char *const B_18_0__B_18_end_back__0;  // B_18_0 > B_18_end_back size:= 1*char defined in Core0
extern char *const B_18_0__jn_0__0;  // B_18_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_23_init_feed__B_23_0__0;  // B_23_init_feed > B_23_0 size:= 1*char defined in Core0
extern char *const frk_0__B_23_0__0;  // frk_0 > B_23_0 size:= 1*char defined in Core0
extern uchar *const newPort6_06__inB__0;  // frk_0_newPort6_06 > B_23_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__5;  // B_23_init_feed_feed > B_23_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort6_06__0;  // B_23_0_outB > jn_0_newPort6_06 size:= 1*uchar defined in Core0
extern uchar *const back__back__7;  // B_23_0_back > B_23_end_back_back size:= 1*uchar defined in Core0
extern char *const B_23_0__jn_0__0;  // B_23_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_29_init_feed__B_29_0__0;  // B_29_init_feed > B_29_0 size:= 1*char defined in Core0
extern char *const frk_0__B_29_0__0;  // frk_0 > B_29_0 size:= 1*char defined in Core0
extern uchar *const newPort12_12__inB__0;  // frk_0_newPort12_12 > B_29_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__11;  // B_29_init_feed_feed > B_29_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort12_12__0;  // B_29_0_outB > jn_0_newPort12_12 size:= 1*uchar defined in Core0
extern uchar *const back__back__12;  // B_29_0_back > B_29_end_back_back size:= 1*uchar defined in Core0
extern char *const B_29_0__jn_0__0;  // B_29_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_36_init_feed__B_36_0__0;  // B_36_init_feed > B_36_0 size:= 1*char defined in Core0
extern char *const frk_0__B_36_0__0;  // frk_0 > B_36_0 size:= 1*char defined in Core0
extern uchar *const newPort19_19__inB__0;  // frk_0_newPort19_19 > B_36_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__17;  // B_36_init_feed_feed > B_36_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort19_19__0;  // B_36_0_outB > jn_0_newPort19_19 size:= 1*uchar defined in Core0
extern uchar *const back__back__17;  // B_36_0_back > B_36_end_back_back size:= 1*uchar defined in Core0
extern char *const B_36_0__B_36_end_back__0;  // B_36_0 > B_36_end_back size:= 1*char defined in Core0
extern char *const B_36_0__jn_0__0;  // B_36_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_20_0__B_20_end_back__0;  // B_20_0 > B_20_end_back size:= 1*char defined in Core0
extern uchar *const back__back__4;  // B_20_0_back > B_20_end_back_back size:= 1*uchar defined in Core0
extern char *const B_26_0__B_26_end_back__0;  // B_26_0 > B_26_end_back size:= 1*char defined in Core0
extern uchar *const back__back__0;  // B_26_0_back > B_26_end_back_back size:= 1*uchar defined in Core0
extern char *const B_34_0__B_34_end_back__0;  // B_34_0 > B_34_end_back size:= 1*char defined in Core0
extern uchar *const back__back__15;  // B_34_0_back > B_34_end_back_back size:= 1*uchar defined in Core0
extern char *const B_37_0__B_37_end_back__0;  // B_37_0 > B_37_end_back size:= 1*char defined in Core0
extern uchar *const back__back__18;  // B_37_0_back > B_37_end_back_back size:= 1*uchar defined in Core0

void* computationThread_Core3(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  fifoInit(FIFO_Head_B_20_end_back__B_21_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_23_end_back__B_24_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_26_end_back__B_27_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_29_end_back__B_30_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_34_end_back__B_35_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_37_end_back__B_38_init_feed__0, 1, NULL, 0); // 1 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    fifoPop(feed__feed__3, FIFO_Head_B_20_end_back__B_21_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    fifoPop(feed__feed__6, FIFO_Head_B_23_end_back__B_24_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 4); // Core3 > Core4
    sendEnd(); // Core3 > Core4
    fifoPop(feed__feed__9, FIFO_Head_B_26_end_back__B_27_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    fifoPop(feed__feed__12, FIFO_Head_B_29_end_back__B_30_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 4); // Core3 > Core4
    sendEnd(); // Core3 > Core4
    fifoPop(feed__feed__16, FIFO_Head_B_34_end_back__B_35_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 2); // Core3 > Core2
    sendEnd(); // Core3 > Core2
    fifoPop(feed__feed__19, FIFO_Head_B_37_end_back__B_38_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 2); // Core3 > Core2
    sendEnd(); // Core3 > Core2
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    B(newPort1_01__inB__0, feed__feed__0, outB__newPort1_01__0, back__back__2); // B_18_0

    sendStart(3, 4); // Core3 > Core4
    sendEnd(); // Core3 > Core4
    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    receiveStart(); // Core5 > Core3
    receiveEnd(5, 3); // Core5 > Core3
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    B(newPort6_06__inB__0, feed__feed__5, outB__newPort6_06__0, back__back__7); // B_23_0

    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    receiveStart(); // Core5 > Core3
    receiveEnd(5, 3); // Core5 > Core3
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    B(newPort12_12__inB__0, feed__feed__11, outB__newPort12_12__0, back__back__12); // B_29_0

    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    receiveStart(); // Core4 > Core3
    receiveEnd(4, 3); // Core4 > Core3
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    B(newPort19_19__inB__0, feed__feed__17, outB__newPort19_19__0, back__back__17); // B_36_0

    sendStart(3, 5); // Core3 > Core5
    sendEnd(); // Core3 > Core5
    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    receiveStart(); // Core5 > Core3
    receiveEnd(5, 3); // Core5 > Core3
    fifoPush(back__back__4, FIFO_Head_B_20_end_back__B_21_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPush(back__back__7, FIFO_Head_B_23_end_back__B_24_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    fifoPush(back__back__0, FIFO_Head_B_26_end_back__B_27_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPush(back__back__12, FIFO_Head_B_29_end_back__B_30_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    fifoPush(back__back__15, FIFO_Head_B_34_end_back__B_35_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core4 > Core3
    receiveEnd(4, 3); // Core4 > Core3
    fifoPush(back__back__18, FIFO_Head_B_37_end_back__B_38_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}
