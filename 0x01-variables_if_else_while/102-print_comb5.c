#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two two-digit numbers,
 *              separated by a space, with each number printed with two digits.
 *              Numbers range from 0 to 99.
 *              Combinations are separated by a comma followed by a space.
 *              Numbers are printed in ascending order.
 *              Combinations such as `00 01` and `01 00` are considered the same.
 *              Only the `putchar` function is used for printing, up to eight times.
 *              No variables of type `char` are used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j;
        int a, b, c, d;

        /* Loop through all possible combinations of two two-digit numbers */
        for (i = 0; i < 100; i++)
        {
                a = i / 10; /* Extract tens digit of first number */
                b = i % 10; /* Extract singles digit of first number */

                for (j = 0; j < 100; j++)
                {
                        c = j / 10; /* Extract tens digit of second number */
                        d = j % 10; /* Extract singles digit of second number */

                        /* Check if the combination is in ascending order */
                        if (a < c || (a == c && b < d))
                        {
                                putchar(a + '0'); /* Print tens digit of first number */
                                putchar(b + '0'); /* Print singles digit of first number */
                                putchar(32);      /* Print a space */
                                putchar(c + '0'); /* Print tens digit of second number */
                                putchar(d + '0'); /* Print singles digit of second number */

                                /* Print comma and space if it's not the last combination */
                                if (!(a == 9 && b == 8))
                                {
                                        putchar(44); /* Print comma */
                                        putchar(32); /* Print space */
                                }
                        }
                }
        }

        putchar(10); /* Print a newline character to end the line */

        return (0);
}

