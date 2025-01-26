#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - do what the function does using a function pointer
 * @array: pointer to array with data
 * @size: the array size
 * @action: function pointer to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p = array + size - 1;

	if (array && size && action)
		while (array <= p)
			action(*array++);
}
