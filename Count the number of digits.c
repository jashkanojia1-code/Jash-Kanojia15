#include <stdio.h>

int  main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

    int count=0;
    while(a!=0)
    {
        a=a/10;
        count=count+1;
    }
    printf("total digits is:  %d",count);

    return 0;


}


