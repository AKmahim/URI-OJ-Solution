#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,T,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
           if(n%2==0 && n>0){
            printf("EVEN POSITIVE\n");
           }
           if(n%2==0 && n<0){
            printf("EVEN NEGATIVE\n");
           }
           if(n%2 !=0 && n>0){
            printf("ODD POSITIVE\n");
           }
           if(n%2 !=0 && n<0){
            printf("ODD NEGATIVE\n");
           }
           if(n==0){
            printf("NULL\n");
           }

    }
  return 0;
}
