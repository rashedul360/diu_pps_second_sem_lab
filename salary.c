#include <stdio.h>
int main()
{
     int a, b;
     float c;
     scanf("%d %d %f", &a, &b, &c);
     printf("NUMBER = %d\n", a);
     printf("SALARY = U$ %0.2f\n", ((float)b * c));
     return 0;
}