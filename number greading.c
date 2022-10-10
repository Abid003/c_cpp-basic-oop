//Write a program that can grade a number//
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if(a>=80&&a<=100)
        printf("A+");
    else if(a>=75&&a<=79)
        printf("A");
    else if(a>=70&&a<=74)
        printf("A-");
    else if(a>=65&&a<=69)
        printf("B+");
    else if(a>=60&&a<=64)
        printf("B-");
    else if(a>=55&&a<=59)
        printf("C+");
    else if(a>=50&&a<=54)
        printf("C-");
    else if(a>=45&&a<=49)
        printf("D+");
    else if(a>=40&&a<=44)
        printf("D-");
    else if(a>=0&&a<=39)
        printf("sF");
    else printf("invalid number");
    return 0;
}
