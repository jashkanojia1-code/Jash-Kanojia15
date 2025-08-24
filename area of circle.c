#include <stdio.h>
#include <math.h>
#define PI 3.142
int main()

{
    float R;
    printf("Enter Radius in cm:  \n");
    scanf("%f", &R);


    printf("Area of Circle is: %f  \n",PI*(pow(R,2)));
    return 0;

}
