#include<stdio.h>
int main()
{
    int i,j,n,temp,x,y,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&x,&y);
        if(x%2==0){
            temp=0;
            for(i=0,j=x+1;i<y;i++,j=j+2){
                temp=temp+j;
            }
        }
        else{
            temp=0;
            for(i=0,j=x;i<y;i++,j=j+2){
                temp=temp+j;
            }
        }
        printf("%d\n",temp);

    }


   return 0;
}

