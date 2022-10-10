#include<stdio.h>
int main()
{
    int i, j,s ,n= 10;

    for (i= 0; i<n; i++)
    {
        for(j= 0 ; j<n; j++)
        {
            if(j==4&&i!=0)
             printf("0 ");

            else if(j> 4 &&  i==0)
             printf("0 ");

             else if(j> 4 &&  i==9)
             printf("0 ");

        else
            printf(" ");
        }
        printf("\n");
    }
}
