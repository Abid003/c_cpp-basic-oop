/*6.Write a program that asks the user for a number
n and prints the sum of the numbers 1 to n*/
#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of %d to 1 is = %d",n,sum);

}
