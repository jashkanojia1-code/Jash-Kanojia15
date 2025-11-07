#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    result = strcmp(str1, str2); // Compare strings

    if (result == 0)
        printf("Both strings are the same.\n");
    else if (result > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    getch(); // Wait for key press before closing
    return 0;
}
