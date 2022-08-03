#include<stdio.h>
int main()
{
    char OPER ;
    float A,B;
    do{
    printf("CALCULATRICE \n");

    printf("saisir un nombre A : \n ");
    scanf("%f",&A);
    printf("saisir un autre nombre B:\n ");
    scanf("%f",&B);
    printf("saisir un operateur : ");
    scanf("%s",&OPER);
    switch (OPER){
     case '+':
         printf("%f + %f = %f",A,B,A+B);
         break;
     case '-':
         printf("%f - %f= %f",A,B,A-B);
         break;
     case '*':
         printf("%f * %f = %f",A,B,A*B);
         break;
     case '/':
        if (B!= 0)
            printf("%f/ %f =%f",A,B,A/B);

        else
                printf("IMPOSSIBLE");

         break;
     default :("ERREUR");
    }


}while(OPER!='q');
}
