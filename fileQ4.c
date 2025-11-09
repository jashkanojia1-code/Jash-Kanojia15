#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int rollno;
    char name[50];
    char choice;

    // Open file in write mode (use "a" to append if you want to keep old data)
    fp = fopen("student_records.csv", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // Write column headers (optional but useful for Excel)
    fprintf(fp, "Roll No,Name\n");

    do
    {
        printf("Enter Roll No: ");
        scanf("%d", &rollno);
        printf("Enter Name: ");
        scanf(" %[^\n]", name);  // to accept full name with spaces

        // Write data in CSV format
        fprintf(fp, "%d,%s\n", rollno, name);

        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);

    printf("\nData successfully written to 'student_records.csv'.\n");
    printf("You can open this file directly in MS Excel.\n");

    return 0;
}
