#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter total even numbers whose sum has to be calculated:");
    scanf("%d", &n);
    
    int sum=0;
    for(i=0;i<=2*n;i+=2)
    {
        sum+=i;  
    }
    printf("the sum of entered even numbers is %d\n",sum);
    return 0;
}