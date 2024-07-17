#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: First index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    size_t pos;

    if (array == NULL || size == 0)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (array[high] == array[low])
            break;

        pos = low + ((double)(high - low) / (array[high] - array[low])) * (value - array[low]);

        if (pos >= size)
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            break;
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] < value)
            low = pos + 1;
        else if (array[pos] > value)
            high = pos - 1;
        else
            return (pos);
    }

    return (-1);
}
