#include <stdio.h>

int main() {
    int i, j, sum = 0;

    for(i = 2; i <= 500; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;  // Not prime
        }
        if(j == i)  // Prime number
            sum += i;
    }

    printf("Sum of prime numbers between 1 and 500 = %d\n", sum);

    return 0;
}
