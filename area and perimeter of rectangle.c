
#include <stdio.h>


int main()
{
    float length,breadth;
    printf("Enter The value of length in cm:    \n");
    scanf("%f", &length);
    printf("Enter the value of breadth in cm:    \n");
    scanf("%f", &breadth);


    printf("Area of rectangle: %f sq. cm\n", length*breadth);
    printf("Perimeter of Rectangle: %f cm", 2*(length+breadth));

    return 0;

}
