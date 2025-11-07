#include <stdio.h>
int main()
{
    int a[100],n;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    //input elements

    printf("Enter array elements\n");

    for(int i = 0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        a[i]=a[i+1];
    }
    n--;

    //resulting array

    printf("After deleting the first element: \n");

    for(int i = 0; i < n; i++)
    {
        printf("%d  \t", a[i]);
    }

    return 0;


}