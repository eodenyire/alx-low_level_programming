#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase letters except for 'q' and 'e'
 *              using the `putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char c = 'a';

        /* Print all lowercase letters except 'q' and 'e' */
        while (c <= 'z')
        {
                if (c != 'q' && c != 'e')
                        putchar(c);
                c++;
        }

        /* Print a newline character to end the line */
        putchar('\n');

        return (0);
}

