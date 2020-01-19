#include<stdio.h>

int main()
{
    int PA,PB,percent;
    double SG,GA,GB;
    int T,res;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %lf %lf",&PA,&PB,&GA,&GB);
        //check(PA,PB,GA,GB);
        int c=0;
        while(PA <= PB)
        {
            PA *= (GA / 100.0) + 1.0;
            PB *= (GB / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c <= 100){
            printf("%d anos.\n", c);
        }

    }
}
