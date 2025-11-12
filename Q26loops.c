#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number

    while(temp) {
        digit = temp % 10;          // Get last digit
        sum += digit * digit * digit;  // Cube and add
        temp /= 10;                 // Remove last digit
    }

    if(sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
