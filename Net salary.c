#include <stdio.h>

int main()
{

    float GS,NS;
    printf("Enter gross salary:  \n");
    scanf("%f", &GS);

    NS=GS+(0.1*GS)-(0.03*GS);
    printf("The Net Salary is : %f \n",NS);

    return 0;

}
