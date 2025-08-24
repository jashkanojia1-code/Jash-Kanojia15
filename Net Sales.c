#include <stdio.h>

int main()
{

    float gs;
    printf("Enter gross sales:  \n");
    scanf("%f", &gs);

    printf("The Net Sales is : %f \n",gs-(0.1*gs));

    return 0;

}
