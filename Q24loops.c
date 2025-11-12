#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;        // Get the last digit
        reversed = reversed * 10 + remainder;  // Append it to reversed
        num = num / 10;              // Remove the last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
