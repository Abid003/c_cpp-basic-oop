#include<stdio.h>
int main()
{
    int v , t, n;
    while (scanf("%d",&v) != EOF)
    {
        scanf("%d", &t);
        n = v*2*t;
        printf("%d\n",n);

    }
    return 0;
}
