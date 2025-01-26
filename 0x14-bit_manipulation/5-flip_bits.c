#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * needed to be flipped in order to get from a number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bit transformations needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	int i, num;

	res = (n ^ m);
	num = 0;
	for (i = 8 * sizeof(res) - 1; i >= 0; i--)
		if ((res >> i) & 01)
			num++;
	return (num);
}
