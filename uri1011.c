#include<stdio.h>
#define pi 3.14159
int main()
{
    double r;
    scanf("%lf",&r);
    double sphere=(4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",sphere);
    return 0;
}
