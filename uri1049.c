#include<stdio.h>
#include<string.h>
int main()
{
   char  name1[50],name2[50],name3[50];
    scanf("%s",name1);
    scanf("%s",name2);
    scanf("%s",name3);
    if(0==strcmp(name1,"vertebrado")){

        if(0==strcmp(name2,"ave")){

            if(0==strcmp(name3,"carnivoro")){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }

        }
        else{
            if(0==strcmp(name3,"onivoro")){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }

        }
    }
    else{
        //scanf("%s",name2);
        if(0==strcmp(name2,"inseto")){
            //scanf("%s",name3);
            if(0==strcmp(name3,"hematofago")){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }

        }
        else{
            //scanf("%s",name3);
            if(0==strcmp(name3,"hematofago")){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
