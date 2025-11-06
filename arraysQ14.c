//	Insert a new number at a last position within an array


#include <stdio.h>

int main() 
{
    int arr[20];
    int n, num, element;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be entered at the end of the array: \n");
    scanf("%d", &element);

    

    arr[n] = element;
    n++;

    printf("Array after inserting at the beginning:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}