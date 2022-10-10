#include<stdio.h>
int main()
{
    int i;
    printf("---------------------------------------\n");
    for(i=0;i<5;i++)
    {
        if(i%2!=0)
            printf("|                                     |\n");
        else if(i==0)
            printf("|        Roberto                      |\n");
        else if(i==2)
            printf("|        5786                         |\n");
        else if(i==4)
            printf("|        UNIFEI                       |\n");
    }
    printf("---------------------------------------\n");
}
