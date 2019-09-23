#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,result,a,b,c;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    result=a+b;
    c=sqrt(result);
    printf("%.4lf\n",c);
    return 0;

}
