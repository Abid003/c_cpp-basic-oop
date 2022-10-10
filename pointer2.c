#include<stdio.h>
int main()
{
int a=10,y=20, z=30;
int *ptr;
ptr=&a;
printf("value of a is= %d\n",a);
printf("value of a is= %d\n",*ptr);
printf("location of a= %x\n",&ptr);
ptr=&y;
printf("value of a is= %d\n",y);
printf("value of a is= %d\n",*ptr);
printf("location of a= %x\n",&ptr);
ptr=&z;
printf("value of a is= %d\n",z);
printf("value of a is= %d\n",*ptr);
printf("location of a= %x\n",&ptr);
getch();
}
