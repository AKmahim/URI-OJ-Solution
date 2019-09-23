#include<stdio.h>
int main()
{
    int  start_h,start_m,end_h,end_m,d_h,d_m;
    scanf("%d %d %d %d",&start_h,&start_m,&end_h,&end_m);

    d_h=end_h-start_h;


    if(d_h<0){
        d_h=24+(end_h-start_h);
        //printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d_h,d_m);
    }
    d_m=end_m-start_m;
    if(d_m<0){
        d_m=60+(end_m-start_m);
        d_h--;
       // printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d_h,d_m);
    }

    if(start_h==end_h && start_m==end_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d_h,d_m);
    }
    return 0;
}
