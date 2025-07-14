#include <stdio.h>
int main()
{
     printf("Input the number of elements to store in the array : ");
     int n;
     scanf("%d", &n);
     int arr[n];
     printf("Input %d number of elements in the array :\n", n);
     for (int i = 0; i < n; i++)
     {
          printf("element - %d : ", i);
          scanf("%d", &arr[i]);
     }
     for (int i = 0, j = n - 1; i < n / 2; i++, j--)
     {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
     }
     for (int i = 0; i < n; i++)
     {
          printf("%d", arr[i]);
          if (i != (n - 1))
          {
               printf(" ");
          }
          else
          {
               printf("\n");
          }
     }
     return 0;
}