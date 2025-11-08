//Sort all the elements of a 4x4 matrix and store the result in a single-dimension array
#include <stdio.h>

int main()
{
    int a[4][4], b[16], temp;

    printf("Enter the elements of a 4x4 matrix\n");

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The 4x4 matrix is: \n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    //storing the 4x4 matrix into 1-d array

    printf("The sorted single dimensional array is:\n");

    int k=0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            b[k++] = a[i][j];
        }
    }

    //sorting the 1d array

    for(int i = 0; i< 16; i++)
    {
        for(int j = i + 1; j < 16; j++)
        {
            if(b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;                
            }

        }

    }

    // dispalying sorted array
        for(int i = 0; i < 16; i++)
        {
            printf("%d \t", b[i]);
        }



    return 0;


}