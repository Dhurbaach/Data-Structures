#include <stdio.h>
void disparr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int tmp = arr[i];
        int j = i - 1;

        while (arr[j]>tmp && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = tmp;
    }
}
int main()
{
    int arr[] = {1, 45, 67, 5, 8, 9, 0};
    int n = 7;
    printf("Before arranging:\n");
    disparr(arr, n);
    insertionSort(arr, n);
    printf("\nAfter arranging\n");
    disparr(arr, n);
    return 0;
}