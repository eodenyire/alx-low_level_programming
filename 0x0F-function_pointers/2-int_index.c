#include "function_pointers.h"

/**
 * int_index - function to compare numbers in an array
 * @array: array pointer to the mem address of array
 * @size: size of the array
 * @cmp: pointer to function for comparing the ints
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int content = 0;

	if (array && size && cmp)
		while (content < size)
		{
			if (cmp(array[content]))
				return (content);
			content++;
		}
	return (-1);
}
