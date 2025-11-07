#include <stdio.h>

int main()
{
    int a[100],n ;


    printf("Enter the size of array: \n");
    scanf("%d", &n);

    //input element

    printf("Enter %d array elements: \n",n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //printing array elements

    for(int i = 0; i < n; i++)
    {
        printf("The %d element of the array is %d  \n", i+1, a[i]);
    }

    return 0;
}