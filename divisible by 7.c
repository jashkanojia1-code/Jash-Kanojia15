#include <stdio.h>
#include <math.h>

int main()
{

    int num;
    printf("Enter number: \n");
    scanf("%d",&num);

    if(num % 7 == 0)
    {
        printf("%d is Divisible by 7 \n",num);
    }
    else
    {
        printf("%d is not divisible by 7 \n",num);
    }

    return 0;
}

