#include<stdio.h>
struct
{
    char name[10];
    int id;
    float cgpa;
}p[2];

int main()
{
   int i;
    for(i=0;i<2;i++)
        {
        scanf("%s %d %.2f",p[i].name,p[i].id,p[i].cgpa);
        }
        for(i=0;i<2;i++)
        {
        printf("%s %d %.2f\n",p[i].name,p[i].id,p[i].cgpa);
        }
}
