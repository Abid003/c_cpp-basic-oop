//Find Bigger of tree numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
        printf("%d is bjgger",a);
    if(b>a&&b>c)
        printf("%d is bigger",b);
    if(c>a&&c>b)
        printf("%d is bigger",c);
        else printf("all values are equal");
        return 0;
}
