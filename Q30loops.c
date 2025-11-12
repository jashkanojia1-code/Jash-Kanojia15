
#include <stdio.h>

int main() {
    int i, j;

    printf("Prime numbers between 1 and 500:\n");

    for(i = 2; i <= 500; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;  // Not prime, exit inner loop
        }
        if(j == i)  // Completed loop without break → prime
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
