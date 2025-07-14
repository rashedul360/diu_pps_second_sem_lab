#include <stdio.h>
int main()
{
     int n, m;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     int arr2[n][m];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               scanf("%d", &arr[i][j]);
          }
     }
     int sum = 0;
     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (i == j)
               {
                    sum += arr[i][j];
               }
          }
     };
     printf("Trace: %d\n", sum);

     return 0;
}