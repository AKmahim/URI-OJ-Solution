#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,x,y,c=0;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++){
        c++;
        if(c==x){
            printf("%d",i);
        }
        else{
            printf("%d ",i);

        }
        if(c==x){
            c=0;
            printf("\n");
        }
    }
    //printf("\n");
    return 0;
}
