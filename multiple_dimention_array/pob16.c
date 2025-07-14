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

     int is_identity = 0;
     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (i >= j && arr[i][j] == 1)
               {
                    is_identity = 1;
               }
               else
               {
                    is_identity = 0;
               }
          }
     };
     if (is_identity)
     {
          printf("Matrix1 is an IDENTITY MATRIX.\n");
     }
     else
     {
          printf("Matrix1 is not an IDENTITY MATRIX.\n");
     }
     return 0;
}