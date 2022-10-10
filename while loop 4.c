//summation of even numbers between 1 to 100
#include<stdio.h>
int main()
{
int a=1, sum=0;
while(a<=100)
{
    sum=sum+a;
    a=a+2;
}
printf("sum of even number between 1 to 100 is : %d",sum);
return 0;
}
