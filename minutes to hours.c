
#include <stdio.h>


int main()
{
    float hours,minutes;
    printf("Enter minutes:  \n");
    scanf("%f", &minutes);

    hours=minutes/60;
    printf("The hours for the given minutes is: %f", hours);

    return 0;

}
