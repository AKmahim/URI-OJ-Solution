#include<stdio.h>
int main()
{
    int i,n,c=0,t;
    scanf("%d",&n);
    for(i=0;i<1000;i++,c++){
        if(i%n==0){
            c=0;
        }
        printf("N[%d] = %d\n",i,c);
    }
    return 0;

}
