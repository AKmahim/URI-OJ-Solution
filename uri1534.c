#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i,j,a,b,n;

    while(scanf("%d",&n) != EOF){

        //if(n == EOF){
         //   break;
       // }
        int ara[n][n];
        a=-1;
        b=n;
        for(i=0;i<n;i++){
                a++;
                b--;
            for(j=0;j<n;j++){
                ara[i][j]=3;
                ara[i][a]=1;
                ara[i][b]=2;
                printf("%d",ara[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}

