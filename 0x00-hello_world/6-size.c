#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the sizes of various data types
 *              on the computer it is compiled and run on.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
        int a; /* Declaring an integer variable */
        long int b; /* Declaring a long integer variable */
        long long int c; /* Declaring a long long integer variable */
        char d; /* Declaring a character variable */
        float f; /* Declaring a float variable */

        /* Printing the size of a char in bytes */
        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
        /* Printing the size of an int in bytes */
        printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
        /* Printing the size of a long int in bytes */
        printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
        /* Printing the size of a long long int in bytes */
        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
        /* Printing the size of a float in bytes */
        printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

        return (0);
}

