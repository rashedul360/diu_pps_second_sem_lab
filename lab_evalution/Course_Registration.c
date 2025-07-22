#include <stdio.h>
int main()
{
     int test;
     scanf("%d", &test);
     for (int i = 1; i <= test; i++)
     {
          int n, m, k;
          scanf("%d %d %d", &n, &m, &k);
          int total_student = n + k;
          if (total_student <= m)
          {
               printf("Yes\n");
          }
          else
          {
               printf("No\n");
          }
     }

     return 0;
}