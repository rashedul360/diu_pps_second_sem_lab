#include <stdio.h>
#include <math.h>
int main()
{
     int n;
     scanf("%d", &n);
     float result = ceil((float)n / 5);
     printf("%.0f\n", result);
     return 0;
}