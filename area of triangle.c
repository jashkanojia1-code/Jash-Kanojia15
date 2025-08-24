
#include <stdio.h>

int main()
{
    float H,B,Area;
    printf("Enter Height: \n");
    scanf("%f", &H);
    printf("Enter Base length:  \n");
    scanf("%f", &B);

    Area=H*B/2;
    printf("The area is : %f",Area);

    return 0;

}
