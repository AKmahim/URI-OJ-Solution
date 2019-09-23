#include<stdio.h>
int main()
{
    int i,j,p;
    double sum=0.0,avg;
    char ch;
    scanf("%c",&ch);
    double ara[12][12];
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&ara[i][j]);
        }
    }
    int n=5,a=0;

    for(i=7;i<=11;i++){
            a=a+2;
            n--;
        for(j=1;j<=a;j++){
            sum=sum+ara[i][n+j];

    }
    }
    if(ch=='S'){
        printf("%.1lf\n",sum);
    }
    else if(ch=='M')
    {
        avg=sum/30.0;
        printf("%.1lf\n",avg);
    }
return 0;

}



