#include <stdio.h>

int main()
{
    int amount;
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0}; // to store how many notes of each type are used

    // Step 1: Take input from user
    printf("Enter the total amount: ");
    scanf("%d", &amount);

    int remaining = amount;

    // Step 2: Find number of notes for each denomination
    for(int i = 0; i < 9; i++)
    {
        if(remaining >= notes[i])
        {
            count[i] = remaining / notes[i];     // how many notes of this type
            remaining = remaining % notes[i];    // what's left after using them
        }
    }

    // Step 3: Print the result
    printf("\nMinimum number of notes for %d are:\n", amount);
    int totalNotes = 0;

    for(int i = 0; i < 9; i++)
    {
        if(count[i] > 0)
        {
            printf("%d Rs note : %d\n", notes[i], count[i]);
            totalNotes += count[i];
        }
    }

    printf("\nTotal number of notes = %d\n", totalNotes);

    return 0;
}
