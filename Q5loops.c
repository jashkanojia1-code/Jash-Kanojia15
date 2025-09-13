#include <stdio.h>
int main()
{
    int i,n;
    int perLine=5;

    printf("Enter total odd numbers to be printed: \n");
    scanf("%d", &n);

    printf("First %d natural numbers are: \n", n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        if(i%perLine==0)
        {
            printf("\n");
        }
    }
    return 0;
}