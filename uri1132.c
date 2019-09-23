#include<stdio.h>
int main()
{
    int a,b,sum,i;
    scanf("%d",&a);
    scanf("%d",&b);
    sum=0;
    if(a<b){
        for(i=a;i<=b;i++){
        if(i%13 !=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    }
    else{
        for(i=b;i<=a;i++){
        if(i%13 !=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    }
}