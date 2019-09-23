#include<stdio.h>
int main()
{
    int a,b,s,l,i;
    scanf("%d %d",&a,&b);
    if(a<b){
        s=a;
        l=b;
    }
    else{
        s=b;
        l=a;
    }
    int sum=0;
    if(s%2==0){
        s++;
        for(i=s;i<l;i=i+2){
            sum=sum+i;
        }

    }
    else{
            s=s+2;
        for(i=s;i<l;i=i+2){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

}
