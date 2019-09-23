#nclude<stdio.h>
int main()
{
    double n;
    double sum=0;
    int count=0;
    scanf("%lf",&n);
    if(n==2){
        return 0;
    }
    if(n==1){
        printf("novo calculo (1-sim 2-nao)\n");
        sum=0.00;
        count=0;
    }
    if(n<0 && n>10){
        printf("nota invalida\n");
    }
    else{

        while(1){
            scanf("%lf",&n);
              if(n>=0 && n<=10){
        sum=sum+n;
        count=count+1;
        if(count==2){
            count=0;
            sum=0;

        }
            }



    }


  }
}
