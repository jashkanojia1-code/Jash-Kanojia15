#include <stdio.h>
#include <string.h>

int main()
{
    char count[100];
    printf("Enter a string:");
    gets(count);
    printf("Length of string is: %d \n", strlen(count));
    return 0;
}
