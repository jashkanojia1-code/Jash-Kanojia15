#include <stdio.h>

int main()
{

    float a,b;
    printf("Enter first number: \n");
    scanf("%f", &a);
    printf("Enter second number:  \n");
    scanf("%f", &b);


    printf("The sum is : %f\n", a+b);
    printf("The difference is : %f\n", a-b);
    printf("The product is :   %f\n", a*b);
    printf("The divison is :    %f\n", a/b);

    return 0;
}
