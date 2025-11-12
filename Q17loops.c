#include <stdio.h>

int main() {
    int i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 numbers:\n");
    for(i = 1; i <= 200; i++) {
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;
    }

    printf("\nCount of positive numbers = %d", positive);
    printf("\nCount of negative numbers = %d", negative);
    printf("\nCount of zeroes = %d", zero);

    return 0;
}
