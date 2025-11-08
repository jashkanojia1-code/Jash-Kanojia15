#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, len, last_space = -1;

    printf("Enter the full name: \n");
    gets(name);   // simple input (not safe, but easy for beginners)

    len = strlen(name);

    // find position of last space (to get the last name)
    for(i = 0; i < len; i++)
    {
        if(name[i] == ' ')
            last_space = i;
    }

    printf("\nAbbreviated name: ");

    // print initials for all names except the last one
    printf("%c. ", name[0]);   // first initial
    for(i = 0; i < last_space; i++)
    {
        if(name[i] == ' ' && name[i+1] != ' ')
            printf("%c. ", name[i+1]);
    }

    // print the last name
    for(i = last_space + 1; i < len; i++)
        printf("%c", name[i]);

    return 0;
}
