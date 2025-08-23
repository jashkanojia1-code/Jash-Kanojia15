#include <stdio.h>

int main()
{
    float a,b,product;
    printf("Enter first number:   \n");
    scanf("%f", &a);
    printf("Enter second number:  \n");
    scanf("%f", &b);

    product=a*b;
    printf("The product is: %f", product);
    return 0;
}
