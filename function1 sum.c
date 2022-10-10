#include<stdio.h>
int sum_ab(int d,int e)
{
    printf(" %d ", d + e);
}
int main(void)
{
    int a,b,sum;
    scanf("%d,%d",&a,&b);
    sum_ab(a,b);
}
