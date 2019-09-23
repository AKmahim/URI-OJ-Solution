#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
   // freopen("output.txt","wt",stdout);
    int i,T;
    float a,b,c,av;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%f %f %f",&a,&b,&c);
        av=((a*2)+(b*3)+(c*5))/10;
        printf("%.1f\n",av);
    }
}