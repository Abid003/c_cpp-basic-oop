#include<stdio.h>
   int main()
{
    int a[10] , i, j, n ,num,  count = 0;
    //input
    printf("Enter the number of input\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

     printf("Enter a number to delete\n");
     scanf("%d",&num);

    //conditions

   for(i =0;  i<n ; i++)
   {
       count=count+1;// "count" will find the location of that number

            if(a[i]==num)  //if the number is found then same as delete method

           {

            for(i =count;  i<n ; i++)
                {

                a[i-1] = a[i ];


                }
           }



   }



//print that
   printf("after deleting new array =\n");
    for(i=0; i<n-1 ; i++)
    {
          printf("%d\n",a[i]);
    }

    return 0;
}
