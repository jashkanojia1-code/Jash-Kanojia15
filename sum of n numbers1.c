#include <stdio.h>


int main()
{
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d", &n);

    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d \n",sum);

    return 0;
}
