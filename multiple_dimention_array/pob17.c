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
     int count = 0;
     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (arr[i][j] % 2 == 0)
               {
                    count++;
               }
          }
     };
     printf("Number of even elements: %d\n", count);

     return 0;
}