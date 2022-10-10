#include<stdio.h>
int main()
{
    double a,b,c,art,arc,artr,arsq,arr,pi=3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    art = 0.5*a*c;
    arc = pi*c*c;
    artr = (a+b)*0.5*c;
    arsq = b*b;
    arr =a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",art,arc,artr,arsq,arr);
}
