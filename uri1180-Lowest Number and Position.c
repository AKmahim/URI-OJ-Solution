#include<stdio.h>
int main()
{
    int i,j,n,min,position;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    min=ara[0];
    //position=0;
    for(j=0;j<n;j++){
        if(min>ara[j]){
            min=ara[j];
            position=j;

        }
    }

    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",position);

    return 0;

}
