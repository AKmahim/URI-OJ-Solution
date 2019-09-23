#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("%d\n",2);
    for(i=1;i<=10000;i++){
        if(i%n == 0){
            printf("%d\n",i+2);
        }
    }
}
