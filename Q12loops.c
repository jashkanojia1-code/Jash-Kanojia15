#include <stdio.h>
int main()
{
  char name[50];
  printf("Enter your name : \n");
  scanf("%s", name);
  
  int n;
  printf("Enter the number of times you want to enter your name:\n");
  scanf("%d", &n);

  for(int i=0;i<n;i++)
  {
    printf("%s \n", name);
  }
  return 0;
}