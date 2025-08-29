#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter total values to be printed: ");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d \n", i);
        }
    }


}


