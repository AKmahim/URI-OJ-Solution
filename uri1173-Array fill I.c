#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int ara[10];
    scanf("%d",&n);

    temp=n;
    for(i=0;i<10;i++){
        ara[i]=temp;
        temp=temp*2;
    }
    for(j=0;j<10;j++){
        printf("N[%d] = %d\n",j,ara[j]);
    }



}

