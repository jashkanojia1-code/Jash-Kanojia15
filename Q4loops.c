#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter total numbers to be printed: \n");
    scanf("%d", &n);
    
    int perLine=10;
    for(i=1;i<=n;i++)
    {
        printf("%d ", i);
        if(i%perLine==0)
        {
            printf("\n");
        }
    }
    return 0;
}