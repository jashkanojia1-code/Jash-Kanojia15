//print reversed string characters by character in a new line


#include <stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter the string:  \n");
    gets(str);


     strrev(str);
    
    printf("The reveresd string in a new line is :  \n");

    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}