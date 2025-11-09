#include <stdio.h>
#include <string.h>

#define SIZE 10

// Structure definition
struct Student {
    int roll_no;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

// Function to print all student names
void printAllNames(struct Student s[], int n) {
    printf("\nList of all students:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i].name);
    }
}

// Function to print data of a student by roll number
void printStudentByRoll(struct Student s[], int n, int roll) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == roll) {
            printf("\nDetails of student with Roll No %d:\n", roll);
            printf("Name: %s\n", s[i].name);
            printf("Course: %s\n", s[i].course);
            printf("Major: %s\n", s[i].major);
            printf("Minor: %s\n", s[i].minor);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nNo student found with Roll No %d\n", roll);
    }
}

int main() {
    struct Student s[SIZE];
    int roll;

    printf("Enter details of %d students:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);
        getchar();  // clear newline
        printf("Enter Name: ");
        gets(s[i].name);
        printf("Enter Course Name: ");
        gets(s[i].course);
        printf("Enter Major Subject: ");
        gets(s[i].major);
        printf("Enter Minor Subject: ");
        gets(s[i].minor);
    }

    // (a) Print all student names
    printAllNames(s, SIZE);

    // (b) Print data of a student whose roll number is given
    printf("\nEnter Roll No to search: ");
    scanf("%d", &roll);
    printStudentByRoll(s, SIZE, roll);

    return 0;
}
