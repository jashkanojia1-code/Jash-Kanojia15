#include <stdio.h>

int sum(int a[], int i, int n) {
    if(i == n)
        return 0;
    return a[i] + sum(a, i + 1, n);
}

int main() {
    int n, a[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int s = sum(a, 0, n);
    printf("Sum = %d\nMean = %.2f", s, s / (float)n);
    return 0;
}
