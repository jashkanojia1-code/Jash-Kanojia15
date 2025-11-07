#include <stdio.h>

int main()
{
    int arr[5], temp;

    printf("Enter 5 elements:  \n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    //sorting  in ascending order

   for(int i = 0; i < 5; i++)
   {
    for(int j = i + 1; j < 5; j++)
    {
    if(arr[i] > arr[j])
      {
       temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       }
    }
   }
    //printing the sorted array
    printf("Array in ascending order: \n");
    for(int i = 0; i < 5; i++)
    {
        printf(" %d \t", arr[i]);
    }


    


}
