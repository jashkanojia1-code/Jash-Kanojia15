#include <stdio.h>

int main()
{
int num1,num2,temp;
printf("Enter num1:\n");
scanf("%d",&num1 );
printf("Enter num2:\n");
scanf("%d",&num2 );

temp=num1;
num1=num2;
num2=temp;

printf("After Swapping:\n");
printf("num1=%d \n",num1);
printf("num2=%d",num2);

return 0;
}
