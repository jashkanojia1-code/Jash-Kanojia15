#include <stdio.h>

int main()
{

    float gs;
    printf("Enter Gross salary:  \n");
    scanf("%f", &gs);

    if(gs>=10000)
    {
        printf("Net Salary: %f\n",gs+(0.1*gs)-(0.03*gs));
    }
    else if(gs>=5000)
    {
        printf("Net salary: %f\n",gs+(0.07*gs)-(0.02*gs));

    }
    else
    {
        printf("Not  Applicable\n");
    }
    return 0;
}
