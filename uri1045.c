#include<stdio.h>
int main()
{
    double a,b,c,sto,hi,lo;
     scanf("%lf %lf %lf",&a,&b,&c);
   if (a>b) {
      sto=a;
      lo=b;
   } else {
      sto=b;
      lo=a;
   }
   if (sto>c) {
      hi=sto;
      if(lo>c){
         sto=lo;
         lo=c;
      }else {
         sto=c;
      }
   }
   else hi=c;



    if(hi >=(sto+lo)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(hi*hi ==((sto*sto)+(lo*lo)) ){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(hi*hi >((sto*sto)+(lo*lo))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(hi*hi < ((sto*sto)+(lo*lo))){
    printf("TRIANGULO ACUTANGULO\n");
    }

    //second line

    if( a==b || b==c || a==c) {
            if(a==b && b==c){
                printf("TRIANGULO EQUILATERO\n");
            }
             else{
                    printf("TRIANGULO ISOSCELES\n");

          }

    }

    return 0;

}
