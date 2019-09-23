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


    int p=12;
    for(i=1;i<=5;i++){
            p--;
        for(j=0;j<i;j++){
            sum=sum+ara[i][p+j];

            }
        }



    int a=6;
    p=6;
    for(i=6;i<=10;i++){
            a--;
            p++;
        for(j=0;j<a;j++){
            sum=sum+ara[i][p+j];
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





