#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by uppercase,
 *              using the `putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char c = 'a';

        /* Print lowercase alphabet */
        while (c <= 'z')
        {
                putchar(c);
                c++;
        }

        c = 'A';

        /* Print uppercase alphabet */
        while (c <= 'Z')
        {
                putchar(c);
                c++;
        }

        /* Print a newline character to end the line */
        putchar('\n');

        return (0);
}

