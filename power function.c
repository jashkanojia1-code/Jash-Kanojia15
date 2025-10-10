#include <stdio.h>



int main()
{
    int a,b;
    printf("Enter the value of base: \n");
    scanf("%d", &a);
    printf("Enter the value of power: \n");
    scanf ("%d", &b);

    printf("The value of a raised to b is: %d", power(a,b));


    return 0;
}
int power(int a, int b)
{
   int result=1;
   for(int i=1;i<=b;i++)
        result=result*a;

   return result;
}
