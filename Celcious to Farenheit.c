#include<stdio.h>
int main()
{
    int Celcius, Farenheit;
    printf("Enter Temperature in Celcius");
    scanf("%d", &Celcius);
    Farenheit = 9*Celcius/5 - 32;
    printf("%d Farenheit", Farenheit);
    return 0;
}
