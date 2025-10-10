#include <stdio.h>

void leapyear (int year)
{
    if(year%4==0){
        printf("Entered year is a leap year\n");

    }else{
        printf("Entered year is not a leap year:\n");
    }
}

int  main()
{
    int year;
    printf("Enter a year:  \n");
    scanf("%d", &year);

    leapyear(year);

    return 0;
}
