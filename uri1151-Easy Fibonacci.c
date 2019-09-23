#include<stdio.h>
int main()
{
    int i,first,fibo,n,last;
    scanf("%d",&n);
    printf("0 1");
    last=1;
    first=0;
    for(i=0;i<n-2;i++){
        fibo=first+last;
        printf(" %d",fibo);
        first=last;
        last=fibo;
        //first=last;
    }
    printf("\n");
}
