#include <stdio.h>

void printName(int n) {
    if(n == 0)
        return;
    printf("Jash Kanojia\n");   // replace with your name
    printName(n - 1);
}

int main() {
    printName(5);
    return 0;
}
