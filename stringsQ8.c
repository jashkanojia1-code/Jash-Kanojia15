#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    // Check palindrome directly
    for(i = 0; str[i] != '\0'; i++);  // Find length
    int len = i;

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            printf("The given string is not a palindrome\n");
            break;
                    } else {
                        printf("The given string is a palindrome\n");
                    }break;
                    
    }
    getch();
    return 0;
}
