#include<stdio.h>
   int main()
{
    int a[10] , i, j, n ,num, loc, count = 0;
    //input
    printf("Enter the number of input\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

     printf("Enter a location to input\n");
     scanf("%d",&loc);
     printf("Enter a number to insert\n");
     scanf("%d",&num);
     loc = loc - 1;
    //conditions

   for(i = n;  i >=loc ; i--)
   {

            a[i+1] = a[i ];


   }
   a[loc] = num;

//print that
   printf("\n");
    for(i=0; i<=n ; i++)
    {
          printf("%d\n",a[i]);
    }

    return 0;
}
