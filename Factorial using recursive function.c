#include <stdio.h>


int fact(int n)
{
    if(n==1)
    {
        return(1);
    }
    return(n*fact(n-1));
}
int main()
{
    int n;
    printf("Enter the number whose factorial is to be calculated: \n");
    scanf("%d",&n);

    fact(n);
    printf("%d", fact(n));

    return 0;
}
