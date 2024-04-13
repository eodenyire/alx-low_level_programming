#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reverse order in lowercase using
 *              the `putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char c;

        /* Print the alphabet in reverse order */
        for (c = 'z'; c >= 'a'; c--)
        {
                putchar(c);
        }

        /* Print a newline character to end the line */
        putchar('\n');

        return (0);
}

