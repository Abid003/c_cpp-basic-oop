#include <stdio.h>
int main()
{
    char ch;
    int i,n=0;
    scanf("%c",&ch);
    for (i='A';i<=ch;i++)
    {
        n=n+1;
    }
    printf("%d\n",n);
    return 0;
}

