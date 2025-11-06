//insert a new element at the beginning of an array

#include <stdio.h>

int main() {
    int arr[20];
    int n, num, i;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at the beginning: ");
    scanf("%d", &num);

    // Move all elements one step to the right
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place new number at the beginning
    arr[0] = num;
    n++;  // increase size of array

    printf("Array after inserting at the beginning:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
