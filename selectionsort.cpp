#include <stdio.h>
void disparr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void selectsort(int arr[], int n)
{
    int indexmin, temp;
    for (int i = 0; i < n; i++)
    {
        indexmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[indexmin] > arr[j])
            {
                indexmin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexmin];
        arr[indexmin] = temp;
    }
}
int main()
{
    int arr[] = {1, 45, 67, 5, 8, 9, 0};
    int n = 7;
    printf("Before arranging:\n");
    disparr(arr, n);
    selectsort(arr, n);
    printf("\nAfter arranging\n");
    disparr(arr, n);
    return 0;
}