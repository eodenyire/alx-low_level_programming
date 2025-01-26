#include "main.h"

/**
 * print_binary -  output binary representation of a number
 * @n: The number to work with.
 * Return: binary rep.
 */
void print_binary(unsigned long int n)
{
	int num;

	int flag; /* Check if 1 has been encountered, otherwise ignore zeros */

	if (n == 0)
		_putchar('0');
	for (flag = 0, num = sizeof(n) * 8 - 1; num >= 0; num--)
	{
		if ((flag == 0) && ((n >> num) & 1))
			flag = 1;
		if (flag == 1)
			((n >> num) & 1) ? _putchar('1') : _putchar('0');
	}
}
