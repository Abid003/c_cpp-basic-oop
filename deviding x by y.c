#include<stdio.h>
int main()
{
    int x,y;
    float a;
    scanf("%d%d",&x,&y);
    if(x%y==0&&y!=0)
    {
        a=x/y;
        printf("%f",a);
    }
}
