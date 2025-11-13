#include <stdio.h>
#include <math.h>

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int armstrongSum(int n, int digits) {
    if (n == 0) return 0;
    return power(n % 10, digits) + armstrongSum(n / 10, digits);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int digits = countDigits(n);
    if (n == armstrongSum(n, digits))
        printf("Armstrong number");
    else
        printf("Not Armstrong");
    return 0;
}
