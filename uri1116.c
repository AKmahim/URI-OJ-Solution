#include<stdio.h>
int main()
{
    int T,x,y;
    double d;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
                d=x/(y*1.00);
            printf("%.1lf\n",d);
        }
    }
    return 0;

}