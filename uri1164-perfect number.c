#include <stdio.h>
int main()
{
    int n,sum=0,c,T,j,i;
    scanf("%d",&T);
    for(j=1;j<=T;j++){

        scanf("%d",&n);
         c=n/2;
        sum=0;
        for( i=1;i<=c;i++)
        {
            if(n%i==0){
                sum +=i;
            }

        }
        if(sum==n){
            printf("%d eh perfeito\n",n);
        }
        else{
            printf("%d nao eh perfeito\n",n);
        }
    }

 return 0;
}

