#include <stdio.h>

void findLargeSmall(int a[], int i, int n, int *max, int *min) {
    if(i == n)
        return;
    if(a[i] > *max)
        *max = a[i];
    if(a[i] < *min)
        *min = a[i];
    findLargeSmall(a, i + 1, n, max, min);
}

int main() {
    int a[100], i, max, min;
    printf("Enter 100 numbers:\n");
    for(i = 0; i < 100; i++)
        scanf("%d", &a[i]);
    max = min = a[0];
    findLargeSmall(a, 1, 100, &max, &min);
    printf("Largest = %d\nSmallest = %d", max, min);
    return 0;
}
