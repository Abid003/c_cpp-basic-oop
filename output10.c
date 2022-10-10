#include<stdio.h>
int main()
{
    int i,j,s,s1=32;
    for(i=65;i<=69;i++)
    {
              for(s=69;s>=i;s--)
        {
            printf(" ");
        }
        for(j=65;j<=i;j++)
        {
      if(i==69 || j==65 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
