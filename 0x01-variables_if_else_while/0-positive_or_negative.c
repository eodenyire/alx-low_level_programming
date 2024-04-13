#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number
 *              and prints whether it's positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        /* Initialize random number generator */
        srand(time(0));

        /* Generate random number and store it in n */
        n = rand() - RAND_MAX / 2;

        /* Check if n is positive */
        if (n > 0)
                printf("%d is positive\n", n);
        /* Check if n is zero */
        else if (n == 0)
                printf("%d is zero\n", n);
        /* If n is neither positive nor zero, it must be negative */
        else if (n < 0)
                printf("%d is negative\n", n);

        return (0);
}

