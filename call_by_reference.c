#include <stdio.h>

// Function to find max and min using call by reference
void findMaxMin(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *max)
            *max = arr[i]
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()s
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max, min;

    // Call the function (passing addresses for call by reference)
    findMaxMin(arr, n, &max, &min);

    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d\n", min);

    return 0;
}
