#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100], temp;
    
    printf("Enter a string: ");
    gets(str);  // input string

    int j = strlen(str) - 1;  // last index

    //using two pointer approach

    for(int i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s", str);

    getch();
    return 0;
}
