#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first number:  \n");
    scanf("%d", &a);
    printf("Enter second number:  \n");
    scanf("%d", &b);
    printf("Enter third number: \n");
    scanf("%d", &c);

    //for greatest
    if(a>=b && a>=c)
    {
        printf("Greatest value: %d\n",a);
    }
    else if(b>=a && b>=c)
    {
        printf("Greatest value: %d\n",b);
    }
    else
    {
        printf("Greatest value= %d\n",c);
    }

    //for smallest
    if(a<=b && a<=c)
    {
        printf("Smallest value: %d\n",a);
    }
    else if(b<=a &&b<=c)
    {
        printf("Smallest value: %d\n",b);
    }
    else
    {
        printf("Smallest value: %d\n",c);
    }

    return 0;

}
