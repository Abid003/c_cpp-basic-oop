/*program that will take number in a 2d array and print the
 even numbers in a new 2d array*/

#include<stdio.h>
int main()
{
        int a[3][3],i, j;
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (a[i][j] % 2==0)

            printf("%d  ",a[i][j]);

                else printf("");
        }
        printf("\n");
    }

}
