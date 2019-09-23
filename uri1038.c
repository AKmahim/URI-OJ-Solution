#include<stdio.h>
int main()
{
    int c,n;
    scanf("%d %d",&c,&n);
    if(c==1){
        printf("Total: R$ %.2f\n",4.00*n);
    }
    else if(c==2){
        printf("Total: R$ %.2f\n",4.50*n);
    }
    else if(c==3){
        printf("Total: R$ %.2f\n",5.00*n);
    }
    else if(c==4){
        printf("Total: R$ %.2f\n",2.00*n);
    }
    else if(c==5){
        printf("Total: R$ %.2f\n",1.50*n);
    }
    return 0;
}
