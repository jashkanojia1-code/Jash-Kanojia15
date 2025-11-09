#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int inWord = 0;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Cannot open file %s\n", filename);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ' || ch == '\t')
        {
            spaces++;
            inWord = 0;
        }
        else if (ch == '\n')
        {
            lines++;
            inWord = 0;
        }
        else
        {
            if (inWord == 0)
            {
                words++;
                inWord = 1;
            }
        }
    }

    fclose(fp);

    printf("File Statistics:\n");
    printf("Lines      : %d\n", lines);
    printf("Words      : %d\n", words);
    printf("Characters : %d\n", characters);
    printf("Spaces     : %d\n", spaces);

    return 0;
}
