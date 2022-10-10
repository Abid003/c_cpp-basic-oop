/*pogram that will take 10 numbers in array and sum*/


#include<stdio.h>
int main()
{
int a[10],i,sum=0;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
    printf("= %d\n",sum);
}
return 0;
}
