#include <stdio.h>

int main() {
    int i, j, count = 0;

    for(i = 2; i <= 500; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;
        }
        if(j == i)
            count++;
    }

    printf("Total prime numbers between 1 and 500 = %d\n", count);
    return 0;
}
