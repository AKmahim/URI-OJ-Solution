#include<stdio.h>
int main()
{
   
    int h,p,i,n,f;
    scanf("%d",&f);
    h=f;
    for(i=2;i<=100;i++){

        scanf("%d",&n);
        if(n>h){
            h=n;
            p=i;
        }


    }

    printf("%d\n%d\n",h,p);
    return 0;
}

