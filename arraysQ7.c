#include <stdio.h>

int main()
{
    int array1[4][4],temp;
    printf("Enter the elements for 4x4 matrix\n");


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d", &array1[i][j]);
        }

    }

    //printing the transpose

    printf("the transpose of the given matrix will be:\n");

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i!=j && j>i)
            {
                temp=array1[i][j];
                array1[i][j]=array1[j][i];
                array1[j][i]=temp;
            }
            printf("%d \t",array1[i][j]);
        }
        printf("\n");
    }
    return 0;

}
