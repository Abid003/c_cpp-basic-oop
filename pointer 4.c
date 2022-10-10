#include<stdio.h>
int sum_ab(int a, int b)
{
    int *ptr;
    ptr=&a+b;
}
int main()
{
int a =10, b=15, sum;
int *ptr;

sum=sum_ab(a,b);
ptr=&sum;
printf("sum is =%x\n",*ptr);
printf("adress of sum is =%x",&ptr);


getch();
}
