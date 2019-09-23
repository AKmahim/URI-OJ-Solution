#include<stdio.h>
int main()
{
    int r1,r2,total_r,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&r1,&r2);
        total_r=r1+r2;
        printf("%d\n",total_r);
    }
    return 0;
}
