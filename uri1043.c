#include<stdio.h>
int main()
{
    float a,b,c,area;
    scanf("%f %f %f",&a,&b,&c);
    if ((a < (float)(b+c)) && (b < (float)(a+c)) && (c < (float)(b+a))){
           printf("Perimetro = %.1f\n",a+b+c);
            }

    else{
        area=0.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}

