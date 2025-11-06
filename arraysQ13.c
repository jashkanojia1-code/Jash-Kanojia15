//insert a new element at any position of an array

#include <stdio.h>

int main() 
{
    int arr[20];
    int n, num, position;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at any position: ");
    scanf("%d", &num);

    printf("Enter position of the element to be inserted(1 to %d) :  \n",n+1);
    scanf("%d", &position);

    int index = position - 1;
    for(int i = n; i > position; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[index] = num;
    n++;

    printf("After insertion:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}