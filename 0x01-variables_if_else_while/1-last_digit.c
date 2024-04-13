#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
        int n;
        int m;

        /* Initializes random number generator */
        srand(time(0));

        /* Generates random number and stores it in n */
        n = rand() - RAND_MAX / 2;
        m = n % 10;

        /* Checks if the last digit is greater than 5 */
        if (m > 5)
                printf("Last digit of %i is %i and is greater than 5\n",
                       n, m);
        /* Checks if the last digit is 0 */
        else if (m == 0)
                printf("Last digit of %i is %i and is 0\n", n, m);
        /* If the last digit is neither greater than 5 nor 0, it must be less than 6 and not 0 */
        else
                printf("Last digit of %i is %i and is less than 6 and not 0\n",
                       n, m);

        return (0);
}

