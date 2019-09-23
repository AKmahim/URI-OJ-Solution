#include<stdio.h>
void salary(float n,int p)
{
    float final_salary,salary_incresed;
    final_salary=n+((n*p)/100 );
    salary_incresed=(n*p)/100;
    printf("Novo salario: %.2f\n",final_salary);
    printf("Reajuste ganho: %.2f\n",salary_incresed);
    return ;
}
int main()
{
    float n;
    scanf("%f",&n);
    if(n> 0.00 && n<=400.00){
        salary(n,15);
        printf("Em percentual: 15 %%\n");
    }
    else  if(n> 400.00 && n<=800.00){
        salary(n,12);
        printf("Em percentual: 12 %%\n");
    }
    else  if(n> 800.00 && n<=1200.00){
        salary(n,10);
        printf("Em percentual: 10 %%\n");
    }
    else  if(n> 1200.00 && n<=2000.00){
        salary(n,7);
        printf("Em percentual: 7 %%\n");
    }
    else{
        salary(n,4);
        printf("Em percentual: 4 %%\n");
    }
    return 0;


}