#include <stdio.h>

void countGender(char s[], int i, int n, int *boys, int *girls) {
    if(i == n)
        return;
    if(s[i] == 'B' || s[i] == 'b')
        (*boys)++;
    else if(s[i] == 'G' || s[i] == 'g')
        (*girls)++;
    countGender(s, i + 1, n, boys, girls);
}

int main() {
    char s[50];
    int boys = 0, girls = 0;
    printf("Enter B for boy and G for girl (50 students):\n");
    for(int i = 0; i < 50; i++)
        scanf(" %c", &s[i]);
    countGender(s, 0, 50, &boys, &girls);
    printf("Boys = %d\nGirls = %d", boys, girls);
    return 0;
}
