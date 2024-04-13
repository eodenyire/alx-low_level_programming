#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 *              starting from 0 using the `printf` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;

        /* Print single digit numbers from 0 to 9 */
        for (i = 0; i < 10; i++)
        {
                printf("%i", i);
        }

        /* Print a newline character to end the line */
        putchar('\n');

        return (0);
}

