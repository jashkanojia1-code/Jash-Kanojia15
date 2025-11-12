#include <stdio.h>

int main() {
    int i, n;
    float num, sum = 0, mean;

    printf("Enter the number of values (N): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / n;

    printf("\nSum = %f", sum);
    printf("\nMean = %f\n", mean);

    return 0;
}
