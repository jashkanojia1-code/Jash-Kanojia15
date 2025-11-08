#include <stdio.h>
#include <conio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Move to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Copy str2 to the end of str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  

    printf("\nConcatenated string: %s", str1);

    getch();
    return 0;
}
