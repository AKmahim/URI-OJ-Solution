#include<stdio.h>
int main()
{
    int T,n,rabbit=0,rat=0,frog=0,total=0;
    char ch;
    scanf("%d",&T);

    while(T--)
    {

        scanf("%d %c",&n,&ch);
        total =total +n;
        if(ch == 'C'){
            rabbit =rabbit+n;
        }
        else if(ch == 'R'){
            rat =rat+ n;
        }
        else if(ch == 'S'){
            frog =frog + n;
        }
    }

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    float r1,r2,r3;
    r1=(rabbit/(float)total)*100;
    r2=(rat/(float)total)*100;
    r3=(frog/(float)total)*100;
    printf("Percentual de coelhos: %.2f %%\n",r1);
    printf("Percentual de ratos: %.2f %%\n",r2);
    printf("Percentual de sapos: %.2f %%\n",r3);
    return 0;
}
