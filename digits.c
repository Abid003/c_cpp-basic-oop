#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,num,i, count=0,rem;
    scanf("%d%d",&a,&b);
    num= pow(a,b);
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        count++;
    }
        printf("%d\n",count);
         printf("%d",num);
}
