#include <stdio.h>
int main()
{

     int n, m;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               scanf("%d", &arr[i][j]);
          }
     }
     // print
     for (int i = 0; i < n; i++)
     {
          int count = 0;
          for (int j = 0; j < m; j++)
          {
               count++;
               printf("%d ", arr[i][j]);
          }
          printf("\n");
     }

     return 0;
}