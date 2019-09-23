#include<stdio.h>
int main()
{
    int i;
    double temp,n;
    scanf("%lf",&n);
    temp=n;
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,temp);
        temp=n/2.0000;
        n=temp;

    }

}
