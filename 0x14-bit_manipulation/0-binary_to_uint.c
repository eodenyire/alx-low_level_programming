#include <stdlib.h>
#include "main.h"

unsigned int _ctoi(char c);

/**
 * binary_to_uint - Converts a binary number
 * to an unsigned int.
 * @b: A poiniter to a string of binary chars.
 * Return: The number in base 10 on success,
 * otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base, len;
	unsigned int mul, num;

	if (b == NULL)
		return (0);

	while (*b == '0')
		b++;

	len = 0;
	while (b[len])
	{
		if ((b[len] < '0') || (b[len] > '1'))
			return (0);
		len++;
	}

	base = 2;
	num = mul = 0;
	for (; len > 0; len--)
	{
		mul *= base;
		if (mul == 0)
			mul = 1;
		num += (_ctoi(b[len - 1]) * mul);
	}

	return (num);
}

/**
 * _ctoi - converts chars to unsigned ints
 * @c: char to convert
 * Return: converted int
 */
unsigned int _ctoi(char c)
{
	unsigned int i;
	char j;

	if ((c >= '0') || (c <= '9'))
		for (i = 0, j = '0'; i <= 9; i++, j++)
			if (c == j)
				return (i);
	return (0);
}
