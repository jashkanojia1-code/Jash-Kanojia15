#include <stdio.h>

void countNum(int a[], int i, int n, int *pos, int *neg, int *zero) {
    if(i == n)
        return;
    if(a[i] > 0)
        (*pos)++;
    else if(a[i] < 0)
        (*neg)++;
    else
        (*zero)++;
    countNum(a, i + 1, n, pos, neg, zero);
}

int main() {
    int a[200], pos = 0, neg = 0, zero = 0;
    printf("Enter 200 numbers:\n");
    for(int i = 0; i < 200; i++)
        scanf("%d", &a[i]);
    countNum(a, 0, 200, &pos, &neg, &zero);
    printf("+ve = %d\n-ve = %d\nZero = %d", pos, neg, zero);
    return 0;
}
