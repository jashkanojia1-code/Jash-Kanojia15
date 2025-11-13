#include <stdio.h>

int checkPrime(int n, int i) {
    if (i == n)
        return 1;
    if (n % i == 0)
        return 0;
    return checkPrime(n, i + 1);
}

void printPrimes(int n) {
    if (n > 500)
        return;
    if (n > 1 && checkPrime(n, 2))
        printf("%d ", n);
    printPrimes(n + 1);
}

int main() {
    printPrimes(1);
    return 0;
}
