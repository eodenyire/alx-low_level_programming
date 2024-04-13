#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using the `putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char c = 'a';

        /* Loop through each character from 'a' to 'z' */
        while (c <= 'z')
        {
                /* Print the current character */
                putchar(c);
                /* Move to the next character */
                c++;
        }

        /* Print a newline character to end the line */
        putchar('\n');

        return (0);
}

