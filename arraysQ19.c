#include <stdio.h>

int main() {
    int arr[50], n, value, i, found = 0;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value to search
    printf("Enter value to search: ");
    scanf("%d", &value);

    // Search for the value
    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            printf("Value found at position %d\n", i + 1);
            found = 1;
            break;  // Stop searching after first match
        }
    }

    if(!found)
        printf("Value not found in the array.\n");

    return 0;
}
