#include <stdio.h>
int main()
{
    int i,j=65,k=-2;
    for(i=1;i<=100;i++)
    {
        j=j-5;
        k=k+3;
        printf("I=%d J=%d\n",k,j);
        if(j==0)
            break;
    }
}
