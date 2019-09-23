#include<stdio.h>
int main()
{
    int T,sum,low,high,x,y,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&x,&y);
        if(x<y){
            low=x;
            high=y;

        }
        else{
            low=y;
            high=x;
        }
        sum=0;
        low=low+1;
        for(i=low;i<high;i++){
            if(i%2 !=0){
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}