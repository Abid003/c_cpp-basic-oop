#include <stdio.h>

int main()
{
  float a,total = 0,av= 0;
  int num = 0,i;

  for (i = 1; i <= 6; i++)
    {
   scanf("%f", &a);
   if (a > 0) {
    num+= 1;
    total += a;
   }
  }
  av= total / num;

  printf("%d valores positivos\n", num);
  printf("%.1f\n",av);

}
