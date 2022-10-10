/*scan numbers in 2 2d array that print sum of their diagonal numbers in a matrix
where other numbers will be zero*/

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3],i, j;
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
            scanf("%d",&b[i][j]);
        }
    }

        for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            if(i==j)
                printf("%d  ",sum[i][j]);
                else printf("0  ");
        }
        printf("\n");
    }
}
