#include "search_algos.h"

/**
 * linear_search - finds a value in arr using linear search algo
 * @array: array to look into
 * @size: size of array
 * @value: target value
 *
 * Return: -1 if not successful array[i] if target found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
