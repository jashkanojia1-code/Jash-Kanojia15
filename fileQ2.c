#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    // Open file in write mode
    fp = fopen("myfile.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a line of text:\n");
    gets(line);  // Accept one line from the user

    fputs(line, fp);  // Write the line into the file

    fclose(fp);  // Close the file

    printf("Line written to file successfully.\n");

    return 0;
}
