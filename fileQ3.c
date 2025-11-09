#include <stdio.h>

int main() {
    FILE *fp;
    char line[200]; // buffer to store each line

    fp = fopen("sample.txt", "r"); // open file in read mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File content:\n");

    // Read line by line until end of file
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line); // print each line
    }

    fclose(fp); // close file
    return 0;
}
