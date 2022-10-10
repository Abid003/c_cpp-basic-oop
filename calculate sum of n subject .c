/*Write a program to calculate sum of n subjects to find the percentage.*/
#include<stdio.h>
int main()
{
    int n,a,i, sum=0, p;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=a+sum;
    }
    p=sum /n;
    printf("%d",p);
    return 0;
}
