#include<stdio.h>

int main()
{
    int T1=0,T2=0,win,S1,S2,D=0,al,res,gm=0;
    while(1){
        scanf("%d %d",&S1,&S2);
        gm++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&al);

        res=S1-S2;
        //printf("res = %d\n",res);
        if(res>0){
            T1 +=1;
        }
        else if(res<0){
            T2 +=1;
        }
        else if(res==0){
            D +=1;
        }
        if(al == 2){
            break;
        }
    }
    printf("%d grenais\n",gm);
    printf("Inter:%d\n",T1);
    printf("Gremio:%d\n",T2);
    printf("Empates:%d\n",D);
    if(T1>T2){
        printf("Inter venceu mais\n");
    }
    else if(T2>T1){
        printf("Gremio venceu mais\n");
    }
    else if(T1==T2){
        printf("Não houve vencedor\n");
    }

}
