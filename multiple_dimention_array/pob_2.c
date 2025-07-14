#include <stdio.h>
int main()
{

     int arr[3][3];
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               scanf("%d", &arr[i][j]);
          }
     }
     // print
     for (int i = 0; i < 3; i++)
     {
          int count = 0;
          for (int j = 0; j < 3; j++)
          {
               count++;
               printf("%d ", arr[i][j]);
          }
          if (count == 3)
          {
               printf("\n");
               count = 0;
          }
     }

     return 0;
}