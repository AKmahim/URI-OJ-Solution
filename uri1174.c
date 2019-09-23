#include<stdio.h>
int main()
{
    int i,j;
    double ara[100];
    for(i=0;i<100;i++){
        scanf("%lf",&ara[i]);
    }

    for(j=0;j<100;j++){
            if(ara[j]<=10){
                printf("A[%d] = %.1lf\n",j,ara[j]);
            }

    }

return 0;

}

