#include<stdio.h>
int main()
{
    int i,j,p;
    double sum=0.0,avg;
    char ch;
    scanf("%c",&ch);
    int ara[12][12];
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=0,p=12;i<12;i++,p--){
        for(j=0;j<i;j++){
            sum=sum+ara[i][p+j];

    }
    }
    if(ch=='S'){
        printf("%.1lf\n",sum);
    }
    else if(ch=='M')
    {
        avg=sum/66.0;
        printf("%.1lf\n",avg);
    }
return 0;

}

