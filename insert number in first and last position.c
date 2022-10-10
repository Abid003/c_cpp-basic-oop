#include<stdio.h>
   int main()
{
    int a[10] , i, j, n ,num1, num2, count = 0;
    //input
    printf("Enter the number of input\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

     printf("Enter two numbers to insert fast and last position\n");
     scanf("%d%d",&num1,&num2);

    //conditions

   for(i = n;  i >=0 ; i--)
   {

            a[i+1] = a[i ];


   }
   a[0]=num1;
   a[n+1] = num2;

//print new array
   printf("\n");
    for(i=0; i<=n+1 ; i++)
    {
          printf("%d\n",a[i]);
    }

    return 0;
}
