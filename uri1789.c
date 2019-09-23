#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,f,n;
    while(scanf("%d",&n) != EOF){
        int ara[n];
        f=0;
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            if(ara[i] < 10){
                if(f>1){
                    continue;
                }
                f=1;
            }
            else if(ara[i] >=10 && ara[i] <20){
                if(f>2){
                    continue;
                }
                f=2;
            }
            else{
                f=3;
            }
        }

        printf("%d\n",f);
    }
    return 0;
}
