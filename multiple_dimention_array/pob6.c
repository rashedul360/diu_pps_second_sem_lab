#include <stdio.h>
int main()
{
     int n, m;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     int arr2[n][m];
     printf("Input elements in the first matrix :\n");
     for (int i = 0; i < n; i++)
     {
          int count = 0;
          for (int j = 0; j < m; j++)
          {

               printf("element - [%d][%d]:", i, j);
               scanf("%d", &arr[i][j]);
          }
     }
     // array 2 input
     printf("Input elements in the second matrix :\n");
     for (int i = 0; i < n; i++)
     {

          for (int j = 0; j < m; j++)
          {

               printf("element - [%d][%d]:", i, j);
               scanf("%d", &arr2[i][j]);
          }
     }
     // addition arr
     int add[n][m];
     for (int i = 0; i < n; i++)
     {

          for (int j = 0; j < m; j++)
          {
               add[i][j] = (arr[i][j] + arr2[i][j]);
          }
     }
     // print final array
     printf("The Addition of two matrix is :\n");
     for (int i = 0; i < n; i++)
     {

          for (int j = 0; j < m; j++)
          {
               printf("%d ", add[i][j]);
          }
          printf("\n");
     }

     return 0;
}