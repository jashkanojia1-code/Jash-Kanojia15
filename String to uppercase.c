#include <stdio.h>
#include <string.h>

int main()
{
    char upper[100];
    printf("Enter string in lower case: \n");
    gets(upper);
    printf("The string in upper case is:   %s\n", strupr(upper));
    return 0;


}
