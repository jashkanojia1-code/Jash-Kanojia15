#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // read a line of text

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;   // convert uppercase to lowercase
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;   // convert lowercase to uppercase
    }

    printf("Toggle case string: %s\n", str);

    return 0;
}
