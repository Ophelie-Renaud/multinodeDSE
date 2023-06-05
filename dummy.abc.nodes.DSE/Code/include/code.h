#ifndef CODE_H
#define CODE_H
#include "preesm.h"
#include "stdio.h"
#include "string.h"

void A(OUT uchar *outA);
void B(IN uchar *inB, IN uchar *feed, OUT uchar *outB, OUT uchar *back);
void OB(IN uchar *inB, IN uchar *feed, OUT uchar *outB, OUT uchar *back);
void C(IN uchar *inC);
void OC(IN uchar *inC);

void set(uchar *out);
void get(uchar *in);

void sub0(OUT uchar *outA, OUT uchar *outD, OUT uchar *outB);
void sub1(IN uchar *inA, IN uchar *inD, OUT uchar *outA, OUT uchar *outD, OUT uchar *outB);
void sub2(IN uchar *inA, IN uchar *inB1, IN uchar *inB0, IN uchar *inD);
#endif