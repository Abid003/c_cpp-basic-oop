#include<stdio.h>
int main()
{
    int n,i,pas=2002;
    for (i=0;i<1000;i++)
    {
        scanf("%d",&n);
        if(n==pas)
        {
        printf("Acesso Permitido\n");
       break;
        }
       else printf("Senha Invalida\n");
    }
    return 0;
}
