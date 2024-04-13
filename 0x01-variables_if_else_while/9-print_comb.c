#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by commas and spaces, using the `putchar` function.
 *              Only `putchar` is used and up to four times.
 *              No variables of type `char` are used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i = 0;

        /* Print single-digit numbers separated by commas and spaces */
        while (i < 10)
        {
                putchar(i + '0');
                if (i < 9)
                {
                        putchar(44);  /* Print comma */
                        putchar(32);  /* Print space */
                }
                i++;
        }

        /* Print a newline character to end the line */
        putchar('\n');

        return (0);
}

