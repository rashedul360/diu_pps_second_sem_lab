#include <stdio.h>
int main()
{
     int n, a, b;
     scanf("%d %d %d", &n, &a, &b);
     int sum = n - a;
     sum += b;
     printf("%d\n", sum);
     return 0;
}