#include<stdio.h>

long long int fibo[60];
//recursion function
long long int fib(int n)
{
    if(fibo[n] != 0){
        return fibo[n];
    }
    if(n==1 || n==2){
        return fibo[n];
    }
    fibo[n]=fib(n-1) + fib(n-2);

    return fibo[n];

}
//main function

int main()
{
    //fibo[0]=0;
    fibo[1]=1;
    fibo[2]=1;
    int n,T;
    scanf("%d",&T);
    while(T--){

        scanf("%d",&n);
        if(n==0){
            printf("Fib(0) = 0\n");
        }
        else{
            printf("Fib(%d) = %lld\n",n,fib(n));
        }


    }




    return 0;


}


