#include<stdio.h>
   int main()
{
    int a[10] , i,  n ,  count = 0;
    //input
    printf("Enter the number of input\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }


   for(i =0;  i<n ; i++)
   {
            if(a[i]<a[i+1])
            {
                count= count+1;
            }
   }


        if(count== n)
        {
            printf("shorted");
        }
        else
            printf("not shorted");
}
