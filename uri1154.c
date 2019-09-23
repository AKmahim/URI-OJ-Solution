#include<stdio.h>
int main()
{
    int n,c=0,s=0;
    float av;
    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }
        s=s+n;
        c++;
    }
    av=s/ (float)c;
    printf("%.2f\n",av);
    return 0;
}
