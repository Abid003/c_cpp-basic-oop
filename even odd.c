/*Write a program to print the numbers between 1 to  n,
 along with an indication of whether each is even or odd*/

 #include<stdio.h>
 int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d is even\n",i);
        else printf("%d is odd\n",i);
    }
}
