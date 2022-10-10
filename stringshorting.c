#include <stdio.h>
int main()
{
    char a[10];
    int i,j, temp, n=5;
    for(i=0;i<n; i++)
    {
        scanf("%c",&a[i]);
    }
 for(i=0;i<n; i++)
    {
       for(j=0;j<n-i-1; j++)
       {
           if(a[j]>a[i+j])
           {
               temp = a[j];
               a[j]= a[j+1];
               a[j+1]= temp;
           }
       }
    }
for(i=0;i<n; i++){
    printf("%c  ",a[i]);
}

}
