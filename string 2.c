#include<stdio.h>
int main()
{
    char a[30];
gets(a);
int i, j=0;
for(i=0;a[i]!='\0';i++){
   j++;
}
printf("%d",j);
}
