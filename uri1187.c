#include<stdio.h>
int main()
{
    int i,j;
    double sum=0.0,avg;
    char ch;
    scanf("%c",&ch);
    double ara[12][12];
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&ara[i][j]);
        }
    }
    int n=-1,a=12;
    for(i=0;i<5;i++){
            a=a-2;
            n++;
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


