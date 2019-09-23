#include<stdio.h>
int main()
{
    int n1,n2,sum,i,count=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    while(1){
        if(n2>n1){
            break;

        }
        else{
            scanf("%d",&n2);
        }
    }
    sum=0;
    i=n1;
    while(sum<n2){
        sum=sum+i;
        i++;
        count++;
    }
    printf("%d\n",count);


}
