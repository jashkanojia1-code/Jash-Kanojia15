#include <stdio.h>

int main()
{
    int a[10];
    printf("Enter 10 elements of an array: \n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    //printing 4th, 7th and 9th element


    printf("The 4th element is:  %d\n",  a[3]);
    printf("The 7th element is:  %d\n",  a[6]);
    printf("The 9th element is:  %d\n",  a[9]);
    
return 0;

}