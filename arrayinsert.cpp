#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", arr[i]);
  }
}
int main()
{
  int arr[50], n, K;
  int pos, data;
  printf("Enter the size of array:");
  scanf("%d", &n);
  K = n;
  printf("Enter the data in array:");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Array before insertion:\n");
  display(arr, K);
  printf("Enter the position where you want to insert:");
  scanf("%d", &pos);
  if (pos < 0 || pos > n)
  {
    printf("\nInvalid position for insertion");
    exit(0);
  }
  for (int i = n; i >= pos; i--)
  {
    arr[i + 1] = arr[i];
  }
  printf("Enter the element you want to insert:\n");
  scanf("%d", &data);
  arr[pos] = data;
  printf("Array after insertion :\n");
  display(arr, n + 1);
}