#include <stdio.h>

void separate(int n) {
    if (n == 0)
        return;
    int d = n % 10;
    separate(n / 10);
    printf("%d ", d);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    separate(n);
    return 0;
}
