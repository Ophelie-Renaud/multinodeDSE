/**
 * @file Core2.c
 * @generated by CPrinter
 * @date Thu Jun 01 11:28:59 CEST 2023
 *
 * Code generated for processing element Core2 (ID=2).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

extern char Shared[95]; //  size:= 95*char
extern char *const FIFO_Head_B_31_end_back__B_32_init_feed__0; // FIFO_Head_B_31_end_back > B_32_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__14;  // B_32_init_feed_feed > B_32_0_feed size:= 1*uchar defined in Core0
extern char *const B_32_init_feed__B_32_0__0;  // B_32_init_feed > B_32_0 size:= 1*char defined in Core0
extern char *const B_22_init_feed__B_22_0__0;  // B_22_init_feed > B_22_0 size:= 1*char defined in Core0
extern char *const frk_0__B_22_0__0;  // frk_0 > B_22_0 size:= 1*char defined in Core0
extern uchar *const newPort5_05__inB__0;  // frk_0_newPort5_05 > B_22_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__4;  // B_22_init_feed_feed > B_22_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort5_05__0;  // B_22_0_outB > jn_0_newPort5_05 size:= 1*uchar defined in Core0
extern uchar *const back__back__6;  // B_22_0_back > B_22_end_back_back size:= 1*uchar defined in Core0
extern char *const B_22_0__B_22_end_back__0;  // B_22_0 > B_22_end_back size:= 1*char defined in Core0
extern char *const B_22_0__jn_0__0;  // B_22_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_28_init_feed__B_28_0__0;  // B_28_init_feed > B_28_0 size:= 1*char defined in Core0
extern char *const frk_0__B_28_0__0;  // frk_0 > B_28_0 size:= 1*char defined in Core0
extern uchar *const newPort11_11__inB__0;  // frk_0_newPort11_11 > B_28_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__10;  // B_28_init_feed_feed > B_28_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort11_11__0;  // B_28_0_outB > jn_0_newPort11_11 size:= 1*uchar defined in Core0
extern uchar *const back__back__11;  // B_28_0_back > B_28_end_back_back size:= 1*uchar defined in Core0
extern char *const B_28_0__B_28_end_back__0;  // B_28_0 > B_28_end_back size:= 1*char defined in Core0
extern char *const B_28_0__jn_0__0;  // B_28_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_35_init_feed__B_35_0__0;  // B_35_init_feed > B_35_0 size:= 1*char defined in Core0
extern char *const frk_0__B_35_0__0;  // frk_0 > B_35_0 size:= 1*char defined in Core0
extern uchar *const newPort18_18__inB__0;  // frk_0_newPort18_18 > B_35_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__16;  // B_35_init_feed_feed > B_35_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort18_18__0;  // B_35_0_outB > jn_0_newPort18_18 size:= 1*uchar defined in Core0
extern uchar *const back__back__16;  // B_35_0_back > B_35_end_back_back size:= 1*uchar defined in Core0
extern char *const B_35_0__B_35_end_back__0;  // B_35_0 > B_35_end_back size:= 1*char defined in Core0
extern char *const B_35_0__jn_0__0;  // B_35_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_38_init_feed__B_38_0__0;  // B_38_init_feed > B_38_0 size:= 1*char defined in Core0
extern char *const frk_0__B_38_0__0;  // frk_0 > B_38_0 size:= 1*char defined in Core0
extern uchar *const newPort21_21__inB__0;  // frk_0_newPort21_21 > B_38_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__19;  // B_38_init_feed_feed > B_38_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort21_21__0;  // B_38_0_outB > jn_0_newPort21_21 size:= 1*uchar defined in Core0
extern uchar *const back__feed__1;  // B_38_0_back > B_39_0_feed size:= 1*uchar defined in Core0
extern char *const B_38_0__B_39_0__0;  // B_38_0 > B_39_0 size:= 1*char defined in Core0
extern char *const B_38_0__jn_0__0;  // B_38_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_31_0__B_31_end_back__0;  // B_31_0 > B_31_end_back size:= 1*char defined in Core0
extern uchar *const back__back__14;  // B_31_0_back > B_31_end_back_back size:= 1*uchar defined in Core0

void* computationThread_Core2(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  fifoInit(FIFO_Head_B_31_end_back__B_32_init_feed__0, 1, NULL, 0); // 1 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    fifoPop(feed__feed__14, FIFO_Head_B_31_end_back__B_32_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    receiveStart(); // Core4 > Core2
    receiveEnd(4, 2); // Core4 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort5_05__inB__0, feed__feed__4, outB__newPort5_05__0, back__back__6); // B_22_0

    sendStart(2, 5); // Core2 > Core5
    sendEnd(); // Core2 > Core5
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core4 > Core2
    receiveEnd(4, 2); // Core4 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort11_11__inB__0, feed__feed__10, outB__newPort11_11__0, back__back__11); // B_28_0

    sendStart(2, 5); // Core2 > Core5
    sendEnd(); // Core2 > Core5
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort18_18__inB__0, feed__feed__16, outB__newPort18_18__0, back__back__16); // B_35_0

    sendStart(2, 4); // Core2 > Core4
    sendEnd(); // Core2 > Core4
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort21_21__inB__0, feed__feed__19, outB__newPort21_21__0, back__feed__1); // B_38_0

    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core5 > Core2
    receiveEnd(5, 2); // Core5 > Core2
    fifoPush(back__back__14, FIFO_Head_B_31_end_back__B_32_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}
