#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    int i,j,k;
    int ara[15];
    int par[5];
    int impar[5];
    for(i=0;i<15;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<15;i++){
        if(a==5){
            for(j=0;j<5;j++){
                printf("impar[%d] = %d\n",j,impar[j]);
                a=0;
            }
        }
        if(b==5){
            for(k=0;k<5;k++){
                printf("par[%d] = %d\n",k,par[k]);
                b=0;
            }
        }

        if(ara[i]%2 !=0){
            impar[c]=ara[i];
            ++c;
            a++;
            if(c==5) c=0;

        }
        if(ara[i]%2 ==0){
            par[d]=ara[i];
            ++d;
            b++;
            if(d==5) d=0;

        }
    }
    for(i=0; i<a; i++)
            printf("impar[%d] = %d\n", i, impar[i]);
    for(j=0; j<b; j++)
            printf("par[%d] = %d\n", j, par[j]);

}
