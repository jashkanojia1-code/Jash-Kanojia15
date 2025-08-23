#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter Celsius:  \n");
    scanf("%f", &C);

    F=(C*9/5)+32;
    printf("The Temperature in Fahrenheit is :  %f", F);

    return 0;

}
