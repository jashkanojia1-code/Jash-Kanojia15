//Program to find the matrix  multiplication 

#include <stdio.h>

int main()
{
    int arr1[10][10], arr2[10][10], result[10][10];
    int r1,r2,c1,c2;
    int ans;


    printf("Enter the rows and columns for the first matrix: \t");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows and columns for the second matrix: \t");
    scanf("%d %d", &r2, &c2);


    //condition checkinfg for multiplication

    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    //inputing elements for first matrix

    printf("Enter the elements for the frist matrix: \n");

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    //inputing elements for second matrix

    printf("Enter the elements for the second matrix: \n");

    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;

    // matrix multiplication

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }


    //display result

    printf("\nResultant matrix:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;

}