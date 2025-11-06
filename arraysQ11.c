#include <stdio.h>

int main() {
    int arr[10], res[10], n, dir, i;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter direction (0 = left, 1 = right): ");
    scanf("%d", &dir);
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);

    // Fill result with 0
    for(i = 0; i < 10; i++)
        res[i] = 0;

    if(dir == 0) { // left shift
        for(i = n; i < 10; i++)
            res[i - n] = arr[i];
    } else { // right shift
        for(i = 0; i < 10 - n; i++)
            res[i + n] = arr[i];
    }

    printf("Shifted array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", res[i]);

    return 0;
}