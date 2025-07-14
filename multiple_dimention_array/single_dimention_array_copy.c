#include <stdio.h>
int main()
{
     printf("Input the number of elements to store in the array : ");
     int n;
     scanf("%d", &n);
     int arr[n + 2];
     int arr2[n + 2];
     printf("Input %d number of elements in the array :\n", n);
     for (int i = 0; i < n; i++)
     {
          printf("element - %d : ", i);
          scanf("%d", &arr[i]);
     }
     for (int i = 0; i < n; i++)
     {

          arr2[i] = arr[i];
     }
     printf("The elements stored in the first array are : \n");
     for (int i = 0; i < n; i++)
     {

          printf("%d ", arr[i]);
     }
     printf("\nThe elements copied into the second array are :\n");
     for (int i = 0; i < n; i++)
     {

          printf("%d ", arr2[i]);
     }
     printf("\n");
     return 0;
}