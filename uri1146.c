#include<stdio.h>
int main()
{
    int i,n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(i=1;i<=n;i++){
            printf("%d",i);
            if(i<n){
                printf(" ");
            }
        }
        printf("\n");
    }

}
