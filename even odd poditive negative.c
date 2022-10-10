#include<stdio.h>
int main()
{
    int a,i,ev = 0,od = 0,pos = 0,neg = 0;
    for (i=1;i<=5;i++)
    {
        scanf("%d",&a);
        {
              if(a%2==0)
        {
            ev=ev+1;
        }
        else
        {
            od=od+1;
        }
        }
        {
                    if(a>=0&&a!=0)
        {
            pos = pos+1;
        }
        else if(a<<0)
        {
            neg = neg+1;
        }
        }
    }
    printf("%d valor(es) par(es)\n",ev);
    printf("%d valor(es) impar(es)\n",od);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
