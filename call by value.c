#include <stdio.h>


void swap(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;

   printf("Inside swap function:%d %d \n",a,b);
}


int main()
{
    int a,b;
    printf("Enter a:  \n");
    scanf("%d", &a);
    printf("Enter b:  \n");
    scanf("%d", &b);


    printf("Before swapping:  %d  %d\n",a,b);

    swap(a,b);

    printf("After swap function: %d %d \n", a,b);


    return 0;
}
