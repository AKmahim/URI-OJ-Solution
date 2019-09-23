#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    double c=0,r,n,s=0;
    while(1){
        if(c==2){
            break;
        }
        scanf("%lf",&n);
        if(n >=0 && n<=10){
            
            s=s+n;
            c++;
        }
        else{
            printf("nota invalida\n");
        }

    }
     r=s/2.00;
    printf("media = %.2f\n",r);
    return 0;

}