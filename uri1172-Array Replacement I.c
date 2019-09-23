#include<stdio.h>
int main()
{
    int i,j;
    int ara[10];
    for(i=0;i<10;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0;i<10;i++){
        if(ara[i]<=0){
            ara[i]=1;
        }
    }
    for(j=0;j<10;j++){
        printf("X[%d] = %d\n",j,ara[j]);
    }



}
