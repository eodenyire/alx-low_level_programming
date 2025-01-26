#include "main.h"

/**
 * get_bit - Function that returns the value of a bit of
 * and integer at a given index.
 * @n: Input long integer.
 * @index: Search index.
 * Return: Value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > ((8 * sizeof(n)) - 1)) ? (-1) : ((int)(n >> index) & 1));
}
