#include <stdio.h>
void disparr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
int main()
{
    int n, i, j, temp;
    int arr[] = {1, 45, 67, 5, 8, 9, 0};
    n = 7;
    printf("before arranging:\n");
    disparr(arr, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nAfter arranging:\n");
    disparr(arr, n);

    return 0;
}