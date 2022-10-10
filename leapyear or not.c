/*2.Write a program to find that a given year is
leap year or not.*/

#include<stdio.h>
int main()
{
    int year;
    printf("enter a year ");
    scanf("%d",&year);
    if(year%4==0)
        printf("%d is leap year",year);
    else printf("%d is not leap year",year);
    return 0;
}

