#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers in hexadecimal (base 16) in lowercase using
 *              the `putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char c;
        int i;

        /* Print numbers 0-9 in hexadecimal */
        for (i = 0; i < 10; i++)
        {
                putchar(i + '0');
        }

        /* Print letters a-f in hexadecimal */
        for (c = 'a'; c < 'g'; c++)
        {
                putchar(c);
        }

        /* Print a newline character to end the line */
        putchar('\n');

        return (0);
}

