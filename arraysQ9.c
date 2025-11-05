//reversing an array
#include <stdio.h>

int main()
{
    int a[5], size;

    // Input array size
    printf("Enter the size of the array (<=5): ");
    scanf("%d", &size);

    // Input elements
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // Two-pointer reverse logic
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }

    // Output reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n"); // newline for clarity
    return 0;
}
