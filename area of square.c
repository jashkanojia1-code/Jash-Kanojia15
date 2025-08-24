#include <stdio.h>


int main()
{
    float side;
    printf("Enter The value of side in cm:    \n");
    scanf("%f", &side);

    printf("The area of sqaure is :  %f  sq. cm   \n", pow(side,2));

    return 0;
}
