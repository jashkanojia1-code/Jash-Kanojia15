#include <stdio.h>
int main()
{
    int i,n;
    int perLine=5;

    printf("Enter total even numbers to be printed: \n");
    scanf("%d", &n);

    printf("First %d  even natural numbers are: \n ", n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",2*i);
        if(i%perLine==0)
        {
            printf("\n");
        }
    }
    return 0;
}