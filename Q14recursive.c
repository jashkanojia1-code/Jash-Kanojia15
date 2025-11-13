#include <stdio.h>

int sum(int a[], int i) {
    if(i == 10)
        return 0;
    return a[i] + sum(a, i + 1);
}

int main() {
    int a[10];
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    int s = sum(a, 0);
    printf("Sum = %d\nMean = %.2f", s, s / 10.0);
    return 0;
}
