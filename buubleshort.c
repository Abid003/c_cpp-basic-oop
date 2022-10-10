
//bubbles short
#include<stdio.h>
   int main()
{
    int a[10] , i, j, n,count;
    //input
    printf("Enter the number of input\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    //conditions

   for(i=0; i<n ; i++)
   {
         for(j=0; j<n ; j++)
         {
             if(a[j]>a[j+1])
       {
           count=a[j];
           a[j]= a[j+1];
           a[j+1]= count;

            }
         }

   }

//print that
   printf("shorted in order\n");
    for(i=0; i<n ; i++)
    {
          printf("%d\n",a[i]);
    }

    return 0;
}
