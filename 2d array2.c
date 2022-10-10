/*scan numbers in a 2d array and print the diagonal numbers in a matrix
where other numbers will be zero*/

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
            if(i==j)
                printf("%d  ",a[i][j]);
                else printf("0  ");
        }
        printf("\n");
    }
}
