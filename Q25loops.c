#include <stdio.h>

int main() {
    int num, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number

    while(temp) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if(num == rev)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
