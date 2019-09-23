#include<stdio.h>
int main()
{
    int x,y,low,high,i;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<y){
        low=x+1;
        high=y;
    }
    else{
        low=y+1;
        high=x;
    }
    for(i=low;i<high;i++){
        if(i%5 ==2 || i%5 ==3){
            printf("%d\n",i);

        }
    }
    return 0;
}