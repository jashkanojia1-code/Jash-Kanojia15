
//frequency of each element in an array

#include <stdio.h>

int main() {
    int arr[10], n, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Frequencies:\n");
    for (int i = 0; i < n; i++) {
        count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // mark as counted
            }
        }
        if (arr[i] != -1)
            printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}