//Accept and print later on three books names using array of pointers


#include <stdio.h>
#include <string.h>

int main()
{
    char books[3][50];          // to store book names temporarily
    char *ptr[3];               // array of pointers

    printf("Enter names of 3 books:\n");

    for (int i = 0; i < 3; i++)
    {
        gets(books[i]);         // read book name
        ptr[i] = books[i];      // store the address of each book name
    }

    printf("\nThe books you entered are:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", ptr[i]); // print using pointer array
    }

    return 0;
}
