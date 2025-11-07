#include <stdio.h>

int main()
{

    int arr1[2][2], arr2[2][2];

    printf("Input the array elements for first 2x2 matrix: \n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

 printf("Input the array elements for second 2x2 matrix: \n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
        
    }

    printf("The addition of the two matrices is :  \n");

    int arr3[2][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    //print the sum

    printf("Summation of the given two arrays:  \n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");        
    }
    return 0;
}