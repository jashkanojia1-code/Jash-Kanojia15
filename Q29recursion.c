#include <stdio.h>

int checkPrime(int n, int i) {
    if (i == n)         // reached end, no divisor found
        return 1;
    if (n % i == 0)     // divisor found → not prime
        return 0;
    return checkPrime(n, i + 1);   // check next number
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        printf("Not prime");
    else if (checkPrime(n, 2))
        printf("Prime");
    else
        printf("Not prime");
    return 0;
}
