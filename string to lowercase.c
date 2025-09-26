#include <stdio.h>
#include <string.h>

int main()
{
    char lower[100];
    printf("Enter string in upper case: \n");
    gets(lower);
    printf("The string in lower case is:   %s\n", strlwr(lower));
    return 0;


}
