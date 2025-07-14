#include <stdio.h>
int main()
{
     int n, m;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     int arr2[n][m];
     printf("First matrix:\n");
     for (int i = 0; i < n; i++)
     {
          int count = 0;
          for (int j = 0; j < m; j++)
          {

               scanf("%d", &arr[i][j]);
          }
     }
     // array 2 input
     printf("Second matrix:\n");
     for (int i = 0; i < n; i++)
     {
          int count = 0;
          for (int j = 0; j < m; j++)
          {

               scanf("%d", &arr2[i][j]);
          }
     }
     // sub arr
     int sub[n][m];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               sub[i][j] = (arr2[i][j] - arr[i][j]);
          }
     }
     // print final array
     printf("The subtraction of two matrix is:\n");
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               printf("%d ", sub[i][j]);
          }
          printf("\n");
     }

     return 0;
}