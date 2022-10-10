/*	Write a program to print the numbers from 1 to n and their squares:
	1	1
	2	4
	3	9
	...
	10	100*/


#include<stdio.h>
 int main()
 {
     int n,i,j;
     printf("enter a number ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         j=i*i;
         printf("%d squire is = %d\n",i,j);
     }
 }
