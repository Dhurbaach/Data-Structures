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
  printf("Array before deletion:\n");
  display(arr, K);
  printf("Enter the position where you want to delete element:");
  scanf("%d", &pos);
  if (pos<0 ||pos>n)
  {
    printf("\nInvalid position for deletion");
    exit(0);
  }
  for (int i = pos; i <n; i++)
  {
    arr[i] = arr[i+1];
  }
  printf("Array after deletion :\n");
  display(arr, n-1);
}