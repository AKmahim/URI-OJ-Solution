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

    for(i=1;i<=5;i++){
        for(j=0;j<i;j++){
            sum=sum+ara[i][j];

    }
    }
    int a=6;
    for(i=6;i<=10;i++){
            a--;
        for(j=0;j<a;j++){
            sum=sum+ara[i][j];

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




