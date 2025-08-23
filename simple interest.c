#include <stdio.h>

int main()
{
    float P,N,R,interest;
    printf("Enter Principle,Rate and Time(in months):  \n");


    scanf("%f %f %f", &P, &R, &N);


    interest=P*N*R/100;
    printf("The simple interest is:  %lf  \n", interest);

    return 0;


}
