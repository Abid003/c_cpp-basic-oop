#include<stdio.h>
int main()
{
    int a[5], b[5], i, sum[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
        {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
    sum[i]=a[i]+b[i];
     printf("%d\n",sum[i]);
    }
    return 0;
}
