#include <stdio.h>


int main()
{
    float hours,minutes;
    printf("Enter hours:  \n");
    scanf("%f", &hours);

    minutes=hours*60;
    printf("The minutes for the given hours is: %f", minutes);

    return 0;

}
