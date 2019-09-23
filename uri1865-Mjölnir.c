#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,n;
    char name[20];
    scanf("%d",&T);
    while(T--){
        scanf("%s %d",name,&n);
        if(strcmp(name,"Thor")==0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
}
