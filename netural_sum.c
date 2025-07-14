#include <stdio.h>
int main()
{

     long long int start, end;
     scanf("%lld %lld", &start, &end);
     long long int sum_of_start = (start * (start - 1)) / 2;
     long long int sum_of_end = (end * (end + 1)) / 2;
     printf("%.lld\n", (sum_of_end - sum_of_start));

     return 0;
}