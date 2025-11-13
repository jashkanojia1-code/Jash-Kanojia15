#include <stdio.h>

void printName(char name[], int n) {
    if(n == 0)
        return;
    printf("%s\n", name);
    printName(name, n - 1);
}

int main() {
    char name[50];
    int n;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter how many times: ");
    scanf("%d", &n);
    printName(name, n);
    return 0;
}
