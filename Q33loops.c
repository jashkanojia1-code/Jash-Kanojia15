#include <stdio.h>

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    if(square % 10 == num || square % 100 == num || square % 1000 == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is not an Automorphic number.\n", num);

    return 0;
}
