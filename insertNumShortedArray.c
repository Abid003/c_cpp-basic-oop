#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10], n=5, num, i, pos=0 ;

    for(i= 0; i<n; i++)
        scanf("%d",&a[i]);

    printf("enter a number to insert");
    scanf("%d",&num);

    for(i= 0; i<n; i++)
    {
       if(num>a[i])
           pos++;
    }
        printf("it will insert in %d position\n",pos+1);

        for(i=n; i>=pos; i--){
            a[i+1] = a[i];
        }
        a[pos] = num;
        n= n+1;
         for(i= 0; i<n; i++)
         {
             printf("%d   ",a[i]);
         }
}
