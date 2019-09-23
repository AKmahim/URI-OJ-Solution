#include<stdio.h>
int main()
{
    int r,c,n;
    double sum=0.0,avg;
    char ch[2];
    double ara[12][12];
    scanf("%d",&n);
    scanf("%s",&ch);
    for(r=0;r<=11;r++){
        for(c=0;c<=11;c++){
            scanf("%lf",&ara[r][c]);
            if(r==n){
                sum=sum+ara[r][c];
            }
        }
    }
    if(ch[0]=='S'){
        printf("%.1lf\n",sum);
    }
    else if(ch[0]=='M')
    {
        avg=sum/12.0;
        printf("%.1lf\n",avg);
    }
    return 0;
}
