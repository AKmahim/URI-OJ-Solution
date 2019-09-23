#include<stdio.h>
int main()
{
    int i,n;
    int devider1[]={100,50,20,10,5,2,1};
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<7;i++){
        int c =n/devider1[i];
        n=(n-(c*devider1[i]));
        printf("%d nota(s) de R$ %d,00\n",c,devider1[i]);
    }
    return 0;

}

