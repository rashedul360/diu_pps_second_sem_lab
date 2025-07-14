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
     int sum = 0;
     for (int i = 0; i < n; i++)
     {
          sum += arr[i];
     }
     printf("Sum of all elements stored in the array is : %d\n", sum);
     return 0;
}