
#include<stdio.h>
int swap_numbers(int c, int d)
{
    int temp;
    temp = c;
    c=d;
    d=temp;
    printf("%d %d\n",c,d);
    return c,d;


}
int main()
{
        int a= 5,b=30;
        swap_numbers(a,b);
            printf("%d %d",a,b);
}

