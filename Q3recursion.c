#include <stdio.h>

void printEven(int n) {
    if (n == 0)
        return;
    printEven(n - 1);
    printf("%d ", 2 * n);
}

int main() {
    printEven(10);
    return 0;
}
