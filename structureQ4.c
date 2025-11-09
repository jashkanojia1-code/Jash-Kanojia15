#include <stdio.h>
#include <string.h>

struct cricketer
{
    char name[50];
    int age;
    int test_matches;
    float average_runs;
};

int main()
{
    struct cricketer c[10], temp;
    int i, j;

    printf("Enter details of 10 cricketers:\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nCricketer %d\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Age: ");
        scanf("%d", &c[i].age);
        printf("Number of test matches: ");
        scanf("%d", &c[i].test_matches);
        printf("Average runs: ");
        scanf("%f", &c[i].average_runs);
    }

    // Sorting in ascending order by average runs
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers arranged in ascending order by average runs:\n");
    printf("%-15s %-5s %-10s %-10s\n", "Name", "Age", "Matches", "Avg Runs");

    for(i = 0; i < 10; i++)
    {
        printf("%-15s %-5d %-10d %-10.2f\n", c[i].name, c[i].age, c[i].test_matches, c[i].average_runs);
    }

    return 0;
}
