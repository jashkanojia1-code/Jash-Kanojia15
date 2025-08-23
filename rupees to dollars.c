#include <stdio.h>

int main()
{
  float dollars,rupees;
  printf("Enter rupees:   \n");
  scanf("%f", &rupees);

  printf("The dollars for given rupees are:  %f \n", rupees/48);

  return 0;
}

