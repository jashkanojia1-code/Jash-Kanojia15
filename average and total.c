
int main()
{

    int m1,m2,m3;
    printf("Enter marks for first subject:  \n");
    scanf("%d",&m1);
    printf("Enter marks for second subject:  \n");
    scanf("%d",&m2);
    printf("Enter marks for third subject:  \n");
    scanf("%d",&m3);

    printf("The total marks are: %d \n",m1+m2+m3);
    printf("The average marks are: %d \n",(m1+m2+m3)/3);

    return 0;
}
