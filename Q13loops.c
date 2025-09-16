#include <stdio.h>
int main()
{
    int i=0;
    int n=100;
    int sum=0;
    printf("The numbers divisible by 13 in the range of 1 to 100 are:\n");

    for(int i=1;i<=n;i++)
    {
        if(i%13==0)
        {
            printf("%d \n", i);            
        }
    }
    for( int i=0;i<=n;i++)
    {
        if(i%13==0)
        {
         sum+=i;
        }
    }
    printf("Sum is : %d\n", sum);
    return 0;
}



        