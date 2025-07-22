#include <stdio.h>
#include <math.h>
int main()
{
     int n, sum = 0;
     scanf("%d", &n);
     int loop = n + 2;
     for (int i = 1; i <= loop; i += 2)
     {
          for (int j = 1; j <= i; j++)
          {
               sum += 1;
          }
     }
     for (int i = n; i >= 1; i -= 2)
     {
          for (int j = 1; j <= i; j++)
          {
               sum += 1;
          }
     }
     printf("%d\n", sum);

     return 0;
}