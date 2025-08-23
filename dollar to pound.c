#include <stdio.h>

int main()
{
    float dollar,pound;

    printf("Enter dollars:  \n");
    scanf("%f", &dollar);

    pound=(dollar*48)/70;

    printf("The amount of pounds for given dollars is:  %f \n", pound);


    return 0;

}




