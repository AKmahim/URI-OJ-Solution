#include<stdio.h>
#include<math.h>
int main()
{
    int i,T;
    double s,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        s=pow(i,2);
        c=pow(i,3);
        printf("%d %.0lf %.0lf\n",i,s,c);
    }
    return 0;
}
