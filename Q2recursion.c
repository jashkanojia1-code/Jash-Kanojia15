#include <stdio.h>

void printOdd(int n) {
    if (n == 0)
        return;
    printOdd(n - 1);
    printf("%d ", 2 * n - 1);
}

int main() {
    printOdd(10);
    return 0;
}
