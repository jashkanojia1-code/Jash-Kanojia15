#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code of 50 students (B for Boy, G for Girl):\n");

    for(i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex);  // Note space before %c to skip whitespace

        if(sex == 'B' || sex == 'b')
            boys++;
        else if(sex == 'G' || sex == 'g')
            girls++;
        else
            printf("Invalid input! Please enter B or G.\n");
    }

    printf("\nTotal Boys: %d", boys);
    printf("\nTotal Girls: %d\n", girls);

    return 0;
}
