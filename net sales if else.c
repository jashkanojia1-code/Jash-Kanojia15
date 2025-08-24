#include <stdio.h>

int main()
{

    float gs;
    printf("Enter Gross Sales: \n");
    scanf("%f", &gs);

    if(gs>20000)
    {
        printf("Net Sales: %f\n", gs-(0.15*gs));
    }
    else if(gs>10000)
    {
        printf("Net Sales: %f\n", gs-(0.10*gs));
    }
    else
    {
        printf("Net sales: %f\n", gs-(0.05*gs));
    }
     return 0;
}
