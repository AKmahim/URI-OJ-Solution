#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin );
    //freopen("output.txt","wt",stdout );
    int i,T,n,in=0,out=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        if(n>=10 && n<=20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n%d out\n",in,out);
}
