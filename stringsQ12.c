//frequency of vowel in a string


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    int j;

    printf("Enter a string: ");
    gets(str);
    for(j = 0; str[j] != '\0'; j++)
    {
        strlwr(str); // convert to lowercase to handle both cases

        if(str[j] == 'a')
            a++;
        else if(str[j] == 'e')
            e++;
        else if(str[j] == 'i')
            i++;
        else if(str[j] == 'o')
            o++;
        else if(str[j] == 'u')
            u++;
    }

    printf("\nFrequency of each vowel:\n");
    printf("A/a = %d\n", a);
    printf("E/e = %d\n", e);
    printf("I/i = %d\n", i);
    printf("O/o = %d\n", o);
    printf("U/u = %d\n", u);

    return 0;
}
