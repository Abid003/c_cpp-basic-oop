#include<stdio.h>
int main()
{
    int a[10]={10,11,12,13,14,15,16,17,18,19,20};
    int i;
    for(i=0;i<10;i++)
    {
        printf("\ni=%d\t*(a+1)=%d,i,x[i]",*(a+i));

    }
}
