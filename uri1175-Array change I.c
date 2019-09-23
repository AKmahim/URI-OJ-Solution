#include<stdio.h>
int main()
{
    int i,j;
    int ara[20];
    int new_ara[20];
    for(i=0;i<20;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0,j=19;i<20;i++,j--){
          new_ara[j]=ara[i];

    }
    for(j=0;j<20;j++){
        printf("N[%d] = %d\n",j,new_ara[j]);
    }



}

