#include<stdio.h>
int main()
{
  float a;
  scanf("%f",&a);
  if(a==25.000)
    printf("Intervalo [0,25]\n");
    else if(a>25.000000&&a<=50.000000)
      printf("Intervalo (25,50]\n");
  else if(50.000000<a&&a<=75.000000)
    printf("Intervalo (50,75]\n");
  else if(75.000000<a&&a<=100.000000)
    printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
  return 0;
}
