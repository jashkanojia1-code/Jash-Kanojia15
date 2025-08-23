
#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter Fahrenheit:  \n");
    scanf("%f", &F);

    C=(F-32)*5/9;
    printf("The Temperature in Celsius is :  %f", C);

    return 0;

}
