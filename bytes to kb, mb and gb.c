#include <stdio.h>

int main()
{


    double bytes, kilobytes, megabytes, gigabytes;
    printf("Enter the size in bytes: ");
    scanf("%lf", &bytes);

    kilobytes = bytes / 1024;
    megabytes = bytes / (1024*1024);
    gigabytes = bytes / (1024*1024*1024);

    printf("\nConversions:\n");
    printf("Kilobytes: %lf KB\n", kilobytes);
    printf("Megabytes: %lf MB\n", megabytes);
    printf("Gigabytes: %lf GB\n", gigabytes);

    return 0;
}

