#include <stdio.h>
int main()
{
     float a;
     scanf("%f", &a);
     if (a < 0 || a > 100)
     {
          printf("Fora de intervalo\n");
     }
     if (a > 75 && a <= 100)
     {
          printf("Intervalo (75,100]\n");
     }
     if (a >= 0 && a <= 25)
     {
          printf("Intervalo [0,25]\n");
     }

     if (a > 25 && a <= 50)
     {
          printf("Intervalo (25,50]\n");
     }

     return 0;
}