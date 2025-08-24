#include <stdio.h>
int main()
{

    float m1,m2,m3,average;
    printf("Enter marks for first subject:  \n");
    scanf("%f",&m1);
    printf("Enter marks for second subject:  \n");
    scanf("%f",&m2);
    printf("Enter marks for third subject:  \n");
    scanf("%f",&m3);

    average=(m1+m2+m3)/3;
    printf("The total marks are: %f \n",m1+m2+m3);
    printf("The average marks are: %f \n",average);

    if(average>=70)
    {
        printf("Distinction \n");
    }
    else if(average>=60)
            {
                printf("First \n");
            }
                else if(average>=50)
                {
                    printf("Second \n");
                }
                else if(average>=35)
                {
                    printf("Third class");
                }
                else
                {
                   printf("Fail");
                }

                if(m1 || m2 || m3<35)
                {
                    printf("Fail");
                }


    return 0;
}
