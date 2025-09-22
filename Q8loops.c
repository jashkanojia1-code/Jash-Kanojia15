#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of odd numbers whose sum has to be calculated:\n");
    scanf("%d",&n);


    printf("The sum of first %d odd numbers is : \n",n);
    int sum=0;
    
    for(i=1;i<=2*n-1;i+2)
    {
        sum+=i;
        
    }
    printf("%d", sum);
    return 0;

}
