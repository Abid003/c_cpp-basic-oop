#include<stdio.h>
int main()
{
    int a,b,c;
    char add='+';
    scanf("%d ",&a);
    scanf("%d",&b);
    scanf("%c",&add);
    switch(a,b)
    {
    case'add':
    c=a+b;
    printf("%d",c);
    break;
    }
    return 0;
}
