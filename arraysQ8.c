#include <stdio.h>
int main()
{
    int arr1[5], arr2[10], j=0;

    //input 5 elements

    printf("Input 5 elements of an array: \n");

    for(int i=0;i<5;i++)
    {
        scanf("%d", &arr1[i]);
    }

    
    //initialize to _

    for(int i = 0;i<10;i++)
    {
        arr2[i]=0;
    }


    // display the new array

    for(int i=0; i<5;i++)
    {
        arr2[j]=arr1[i];
        j=j+2;
    }

    //displaying the array

    for(int i=0;i<10;i++)
    {
        printf("%d", arr2[i]);
    }

    return 0;


}