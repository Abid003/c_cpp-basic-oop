/*Write a program to input two numbers and a choice and calculate the result according to the following conditions:
Choice			Result
1	Add
2	Subtract
3	Multiply
4	Divide
5	Remainder*/


#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf ( "enter two integer and +,-,*,/");
    scanf("%d %d %c",&a,&b,&ch);

    switch(a,b,ch)
    {
    case '+':
    {
        c=a+b;
        printf("%d",c);
    break;
    }
    case '-' :
        {
        c=a-b;
        printf("%d",c);
        break;
        }
            case '*':
    {
        c=a*b;
        printf("%d",c);
    break;
    }
    case '/' :
        {
        c=a/b;
        printf("%d",c);
        break;
        }
        default:
        printf("you pressed wrong character ");
    }

}
