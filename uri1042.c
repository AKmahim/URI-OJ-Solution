#include<stdio.h>
int main()
{
    int n1,n2,n3,l,m,h;
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1>n2){
            m=n1;
            l=n2;
        }
        else{
            m=n2;
            l=n1;
        }
        if(m>n3){
            h=m;
            if(l>n3){
                m=l;
                l=n3;

            }
            else{
                m=n3;
            }

        }
        else{
            h=n3;
        }
        printf("%d\n%d\n%d\n",l,m,h);
        printf("\n%d\n%d\n%d\n",n1,n2,n3);

    return 0;
}
