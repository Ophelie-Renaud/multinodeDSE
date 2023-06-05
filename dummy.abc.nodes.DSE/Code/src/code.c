#include "code.h"
void A(OUT uchar *outA){
    for(int i=0;i< 20;i++){
        outA[i]=i;
        printf("outA:%d -> %d // ",i,outA[i]);

    }
    printf("\n");
}

void B(IN uchar *inB, IN uchar *feed, OUT uchar *outB, OUT uchar *back){
    back[0] = inB[0]+feed[0];
    outB[0] = inB[0];
    printf("back:%d ;outB %d // ",back[0],outB[0]);
    printf("\n");
}
void OB(IN uchar *inB, IN uchar *feed, OUT uchar *outB, OUT uchar *back){
    for(int i = 0; i<2;i++){
        B(inB+i,feed,outB+i,back);
        memcpy(feed+0, back+0,1*sizeof(uchar) );
    }
}

void C(IN uchar *inC){
    for(int i=0;i< 3;i++){
        printf("outC:%d -> %d // ",i,inC[i]);

    }
    printf("\n");
}

void OC(IN uchar *inC){
    for(int i=0;i< 2;i++){
        C(inC+i);
    }
}

void set(uchar *out){
    out[0]=0;
}

void get(uchar *in){
    printf("get:%d\n",in[0]);
}