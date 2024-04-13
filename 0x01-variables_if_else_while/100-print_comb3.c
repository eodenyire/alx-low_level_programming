#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits,
 *              separated by commas and spaces, using the `putchar` function.
 *              Combinations are considered unique, e.g., 01 and 10 are treated as one.
 *              Only the smallest combination of two digits is printed.
 *              Numbers are printed in ascending order with two digits.
 *              Only `putchar` is used, and up to five times.
 *              No variables of type `char` are used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j, k;

        i = 0;

        /* Loop through all possible combinations of two digits */
        while (i < 100)
        {
                j = i % 10; /* Extract singles digit */
                k = i / 10; /* Extract tens digit */

                /* Check if the combination is in ascending order */
                if (k < j)
                {
                        putchar(k + '0'); /* Print tens digit */
                        putchar(j + '0'); /* Print singles digit */

                        /* Print comma and space if it's not the last combination */
                        if (i < 89)
                        {
                                putchar(44);   /* Print comma */
                                putchar(32);   /* Print space */
                        }
                }

                i++; /* Move to the next combination */
        }

        putchar('\n'); /* Print a newline character to end the line */

        return (0);
}

