#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,ex_num,media,final_num;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media=((n1*2)+(n2*3)+(n3*4)+(n4*1) )/10;
    printf("Media: %.1f\n",media);
    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media <5.0){
        printf("Aluno reprovado.\n");
    }
    else if(media >=5.0 && media <=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&ex_num);
        printf("Nota do exame: %.1f\n",ex_num);
        final_num=(media+ex_num)/2;
        if(final_num >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",final_num);


    }
    return 0;
}
