#include <stdio.h>

int main() {
    int matrix[3][3];
    int *ptr;
    int i, j;
    int largest, smallest;

    // Input 3x3 matrix
    printf("Enter 9 elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
     {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize pointer to first element
    ptr = &matrix[0][0];
    largest = *ptr;
    smallest = *ptr;

    // Traverse the matrix using pointer
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            if(*(ptr + i*3 + j) > largest)
            {
                largest = *(ptr + i*3 + j);
            }
            if(*(ptr + i*3 + j) < smallest)
            {
                smallest = *(ptr + i*3 + j);
            }
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
