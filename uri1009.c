#include<stdio.h>
int main()
{
    char name[20];
    double a,b,percent;
    scanf("%s",name);
    scanf("%lf",&a);
    scanf("%lf",&b);
    percent=(b*15)/100;
    printf("TOTAL = R$ %.2lf\n",a+percent);
    return 0;
}
