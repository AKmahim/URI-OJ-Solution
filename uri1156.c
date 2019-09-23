#include<stdio.h>
int main()
{
    double i,j=1,sum=1;
    for(i=3.0;i<=39.0;i+=2.0){
        sum=sum+(i/(j*2));
        j=j*2;
    }
    printf("%.2lf\n",sum);
    return 0;

}