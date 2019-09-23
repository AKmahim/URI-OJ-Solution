#include<stdio.h>
int main()
{
    int i,j;
    float n;
    float devider1[]={100.00,50.00,20.00,10.00,5.00,2.00};
    float devider2[]={1.00,0.50,0.25,0.10,0.05,0.01};
    scanf("%f",&n);
    printf("NOTAS:\n");
    for(i=0;i<6;i++){
        int c =n/devider1[i];
        n=(n-(c*devider1[i]));
        printf("%d nota(s) de R$ %.2f\n",c,devider1[i]);
    }
    printf("MOEDAS:\n");
    for(j=0;j<6;j++){
        int c =n/devider2[j];
        n=(n-(c*devider2[j]));
        printf("%d moeda(s) de R$ %.2f\n",c,devider2[j]);
    }
    return 0;

}

