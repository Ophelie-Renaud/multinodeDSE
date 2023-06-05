/**
 * @file Core5.c
 * @generated by CPrinter
 * @date Thu Jun 01 19:02:21 CEST 2023
 *
 * Code generated for processing element Core5 (ID=5).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
extern char Shared[121]; //  size:= 121*char
extern char *const FIFO_Head_OB_4_end_back__OB_5_init_feed__0; // FIFO_Head_OB_4_end_back > OB_5_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__4;  // OB_5_init_feed_feed > OB_5_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_OB_8_end_back__OB_9_init_feed__0; // FIFO_Head_OB_8_end_back > OB_9_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__8;  // OB_9_init_feed_feed > OB_9_0_feed size:= 1*uchar defined in Core0
extern char *const OB_9_init_feed__OB_9_0__0;  // OB_9_init_feed > OB_9_0 size:= 1*char defined in Core0
extern char *const src_B0_0__explode_src_B0_0_out__0; // src_B0_0 > explode_src_B0_0_out size:= 17*char defined in Core0
extern char *const out_0__inC_1__0; // explode_src_B0_0_out_out_0 > implode_OC_3_inC_inC_1 size:= 4*char defined in Core0
extern uchar *const out_1__inC__0;  // explode_src_B0_0_out_out_1 > OC_4_inC size:= 6*uchar defined in Core0
extern uchar *const out_2__inC__0;  // explode_src_B0_0_out_out_2 > OC_5_inC size:= 6*uchar defined in Core0
extern char *const out_3__inC_0__0; // explode_src_B0_0_out_out_3 > implode_OC_6_inC_inC_0 size:= 1*char defined in Core0
extern uchar *const out__inC__1;  // src_B0_0_out > explode_src_B0_0_out_inC size:= 17*uchar defined in Core0
extern char *const explode_src_B0_0_out__implode_OC_3_inC__0; // explode_src_B0_0_out > implode_OC_3_inC size:= 0*char defined in Core0
extern char *const explode_src_B0_0_out__OC_4__0;  // explode_src_B0_0_out > OC_4 size:= 6*char defined in Core0
extern char *const explode_src_B0_0_out__OC_5__0;  // explode_src_B0_0_out > OC_5 size:= 6*char defined in Core0
extern char *const src_B1_0__explode_src_B1_0_out__0; // src_B1_0 > explode_src_B1_0_out size:= 23*char defined in Core0
extern char *const out_0__inC_1__1; // explode_src_B1_0_out_out_0 > implode_OC_6_inC_inC_1 size:= 5*char defined in Core0
extern uchar *const out_1__inC__1;  // explode_src_B1_0_out_out_1 > OC_7_inC size:= 6*uchar defined in Core0
extern uchar *const out_2__inC__1;  // explode_src_B1_0_out_out_2 > OC_8_inC size:= 6*uchar defined in Core0
extern uchar *const out_3__inC__0;  // explode_src_B1_0_out_out_3 > OC_9_inC size:= 6*uchar defined in Core0
extern uchar *const out__inC__0;  // src_B1_0_out > explode_src_B1_0_out_inC size:= 23*uchar defined in Core0
extern char *const explode_src_B1_0_out__OC_7__0;  // explode_src_B1_0_out > OC_7 size:= 6*char defined in Core0
extern char *const explode_src_B1_0_out__OC_8__0;  // explode_src_B1_0_out > OC_8 size:= 6*char defined in Core0
extern char *const explode_src_B1_0_out__OC_9__0;  // explode_src_B1_0_out > OC_9 size:= 6*char defined in Core0
extern char *const frk_0__OB_5_0__0;  // frk_0 > OB_5_0 size:= 2*char defined in Core0
extern uchar *const newPort5_5__inB__0;  // frk_0_newPort5_5 > OB_5_0_inB size:= 2*uchar defined in Core0
extern uchar *const outB__inC_2__1;  // OB_5_0_outB > implode_OC_1_inC_inC_2 size:= 2*uchar defined in Core0
extern uchar *const back__back__5;  // OB_5_0_back > OB_5_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_5_0__OB_5_end_back__0;  // OB_5_0 > OB_5_end_back size:= 1*char defined in Core0
extern char *const OB_5_0__implode_OC_1_inC__0;  // OB_5_0 > implode_OC_1_inC size:= 2*char defined in Core0
extern uchar *const out__inC__2;  // implode_OC_6_inC_out > OC_6_inC size:= 6*uchar defined in Core0
extern char *const OB_4_0__OB_4_end_back__0;  // OB_4_0 > OB_4_end_back size:= 1*char defined in Core0
extern uchar *const back__back__4;  // OB_4_0_back > OB_4_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_8_0__OB_8_end_back__0;  // OB_8_0 > OB_8_end_back size:= 1*char defined in Core0
extern uchar *const back__back__8;  // OB_8_0_back > OB_8_end_back_back size:= 1*uchar defined in Core0
extern char *const implode_OC_0_inC__OC_0__0;  // implode_OC_0_inC > OC_0 size:= 6*char defined in Core0
extern uchar *const outB__inC__0;  // implode_OC_0_inC_outB > OC_0_inC size:= 6*uchar defined in Core0

void* computationThread_Core5(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

#ifdef PREESM_MD5_UPDATE
	PREESM_MD5_CTX preesm_md5_ctx_out__inC__2;
	PREESM_MD5_Init(&preesm_md5_ctx_out__inC__2);
	PREESM_MD5_CTX preesm_md5_ctx_outB__inC__0;
	PREESM_MD5_Init(&preesm_md5_ctx_outB__inC__0);
#endif
  // Initialisation(s)

  fifoInit(FIFO_Head_OB_4_end_back__OB_5_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_OB_8_end_back__OB_9_init_feed__0, 1, NULL, 0); // 1 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    fifoPop(feed__feed__4, FIFO_Head_OB_4_end_back__OB_5_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed__8, FIFO_Head_OB_8_end_back__OB_9_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 4); // Core5 > Core4
    sendEnd(); // Core5 > Core4
    receiveStart(); // Core2 > Core5
    receiveEnd(2, 5); // Core2 > Core5
    // Fork explode_src_B0_0_out

    {
      memcpy(out_0__inC_1__0 + 0, out__inC__1 + 0, -1); // 4 * char
      memcpy(out_1__inC__0 + 0, out__inC__1 + 4, 6); // 6 * uchar
      memcpy(out_2__inC__0 + 0, out__inC__1 + 10, 6); // 6 * uchar
      memcpy(out_3__inC_0__0 + 0, out__inC__1 + 16, -1); // 1 * char
    }
    sendStart(5, 1); // Core5 > Core1
    sendEnd(); // Core5 > Core1
    sendStart(5, 3); // Core5 > Core3
    sendEnd(); // Core5 > Core3
    sendStart(5, 4); // Core5 > Core4
    sendEnd(); // Core5 > Core4
    receiveStart(); // Core3 > Core5
    receiveEnd(3, 5); // Core3 > Core5
    // Fork explode_src_B1_0_out

    {
      memcpy(out_0__inC_1__1 + 0, out__inC__0 + 0, -1); // 5 * char
      memcpy(out_1__inC__1 + 0, out__inC__0 + 5, 6); // 6 * uchar
      memcpy(out_2__inC__1 + 0, out__inC__0 + 11, 6); // 6 * uchar
      memcpy(out_3__inC__0 + 0, out__inC__0 + 17, 6); // 6 * uchar
    }
    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    sendStart(5, 2); // Core5 > Core2
    sendEnd(); // Core5 > Core2
    sendStart(5, 3); // Core5 > Core3
    sendEnd(); // Core5 > Core3
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    B(newPort5_5__inB__0, feed__feed__4, outB__inC_2__1, back__back__5); // OB_5_0

    sendStart(5, 2); // Core5 > Core2
    sendEnd(); // Core5 > Core2
    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    // Join implode_OC_6_inC

    {
      memcpy(out__inC__2 + 0, out_3__inC_0__0 + 0, -1); // 1 * char
      memcpy(out__inC__2 + 1, out_0__inC_1__1 + 0, -1); // 5 * char
    }
    OC(out__inC__2); // OC_6
#ifdef PREESM_MD5_UPDATE
		PREESM_MD5_Update(&preesm_md5_ctx_out__inC__2,(char *)out__inC__2, 6);
		#endif

    receiveStart(); // Core4 > Core5
    receiveEnd(4, 5); // Core4 > Core5
    fifoPush(back__back__4, FIFO_Head_OB_4_end_back__OB_5_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core3 > Core5
    receiveEnd(3, 5); // Core3 > Core5
    fifoPush(back__back__8, FIFO_Head_OB_8_end_back__OB_9_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    OC(outB__inC__0); // OC_0
#ifdef PREESM_MD5_UPDATE
		PREESM_MD5_Update(&preesm_md5_ctx_outB__inC__0,(char *)outB__inC__0, 6);
		#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

#ifdef PREESM_MD5_UPDATE
	// Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_out__inC__2);
	printf("preesm_md5_out__inC__2 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_outB__inC__0);
	printf("preesm_md5_outB__inC__0 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

  return NULL;
}
