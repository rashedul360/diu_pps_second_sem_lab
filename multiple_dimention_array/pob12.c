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

     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (i >= j)
               {
                    printf("%d ", arr[i][j]);
               }
               else
               {
                    printf("0 ");
               }
          }
          printf("\n");
     }

     return 0;
}