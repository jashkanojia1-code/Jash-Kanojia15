#include <stdio.h>

int main()
{
    float grams;
    printf("Enter Grams: \n");
    scanf("%f", &grams);


    printf("The given value in kg is :  %f", grams/1000);

    return 0;
}
