#include<stdio.h>
int main()
{
int a=10,b=20, sum,i;
int *ptr;
for(i=0;i<10;i++)
{
ptr =&sum;
sum=a+b;
printf("sum is =%d\n",*ptr);
printf("address of next location sum is =%x\n",&ptr+i);
}

getch();
}
