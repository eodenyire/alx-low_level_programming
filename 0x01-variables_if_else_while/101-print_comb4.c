#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of 3 digits,
 *              separated by commas and spaces, using only the `putchar` function.
 *              The three digits must be different.
 *              Combinations such as 012, 120, 102, 021, 201, and 210 are treated as the same.
 *              Only the smallest combination of 3 digits is printed.
 *              Numbers are printed in ascending order.
 *              Only `putchar` is used, and up to six times.
 *              No variables of type `char` are used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j, k, l;

        /* Loop through all possible combinations of 3 digits */
        for (i = 0; i < 1000; i++)
        {
                j = i / 100;          /* Extract hundreds digit */
                k = (i / 10) % 10;    /* Extract tens digit */
                l = i % 10;           /* Extract singles digit */

                /* Check if the combination is in ascending order and digits are different */
                if (j < k && k < l)
                {
                        putchar(j + '0');   /* Print hundreds digit */
                        putchar(k + '0');   /* Print tens digit */
                        putchar(l + '0');   /* Print singles digit */

                        /* Print comma and space if it's not the last combination */
                        if (i < 700)
                        {
                                putchar(44);    /* Print comma */
                                putchar(32);    /* Print space */
                        }
                }
        }

        putchar('\n'); /* Print a newline character to end the line */

        return (0);
}

