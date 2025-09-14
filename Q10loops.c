#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the number whose factorial has to be calculated: \n");
    scanf("%d",&n);

    int fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Fcatorial of given numbers is %d \n", fact);
}