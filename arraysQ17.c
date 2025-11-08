#include <stdio.h>
int main()
{
    int a[100],n,position;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    //input elements

    printf("Enter array elements\n");

    for(int i = 0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position of the element you want to delete(1 to %d):\n",n);
    scanf("%d", &position);

    int index = position -1;

    for(int i = index; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    n--;

    //resulting array

    printf("After deleting the element: \n");

    for(int i = 0; i < n; i++)
    {
        printf("%d  \t", a[i]);
    }

    return 0;



}
