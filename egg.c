#include<stdio.h>
int main()
{
    int TotalMoney, Rate, Dozen;
    scanf("%d %d",&TotalMoney, &Rate);
    Dozen = TotalMoney / Rate;
    printf("Can Buy %d Dozens of egg", Dozen);
    return 0;
}
