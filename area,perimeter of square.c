#include <stdio.h>


int main()
{
    float side;
    printf("Enter The value of side in cm:    \n");
    scanf("%f", &side);

    printf("The area of sqaure is :  %f  sq. cm   \n", pow(side,2));
    printf("The perimeter of quare is : %f cm   \n", 4*side);

    return 0;
}
