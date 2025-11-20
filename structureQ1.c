#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    char course[30];
    char major[30];
    char minor[30];
};

// Function to print names of all students
void printNames(struct Student s[]) {
    printf("\nNames of all students:\n");
    for(int i = 0; i < 10; i++) {
        printf("%s\n", s[i].name);
    }
}

int main() {
    struct Student s[10];
    int i, r, found = 0;

    // Input details
    for(i = 0; i < 10; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Roll number: \n");
        scanf("%d", &s[i].roll);

        printf("Name: \n");
        scanf("%s", s[i].name);

        printf("Course: \n");
        scanf("%s", s[i].course);

        printf("Major: \n");
        scanf("%s", s[i].major);

        printf("Minor: \n");
        scanf("%s", s[i].minor);
    }

    // Call the function to print names
    printNames(s);

    // Search by roll number
    printf("\nEnter roll number to search: ");
    scanf("%d", &r);

    for(i = 0; i < 10; i++) {
        if(s[i].roll == r) {
            printf("\nStudent Found:\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Course : %s\n", s[i].course);
            printf("Major  : %s\n", s[i].major);
            printf("Minor  : %s\n", s[i].minor);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found.\n");

    return 0;
}
