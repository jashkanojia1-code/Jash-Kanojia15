#include <stdio.h>

int main() {
    int a[10][10], b[10][10], r, c, i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Addition
    printf("\nAddition:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("\nSubtraction:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("\nMultiplication:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++)
        {
            int sum = 0;
            for(k = 0; k < c; k++)
                sum += a[i][k] * b[k][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}
