#include<stdio.h>
int main()
{
    int i,j,p=4,T,c=1;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        for(j=c;j<=p;j++){
            if(j%4==0){
                printf("PUM\n");
            }
            else{
                printf("%d ",j);
            }
        }
           c=c+4;
           p=p+4;
    }


}