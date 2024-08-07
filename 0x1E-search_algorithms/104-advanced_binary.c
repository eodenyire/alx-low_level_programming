#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: the array to print
 * @left: starting index of the array
 * @right: ending index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * rec_search - searches for a value in a sorted array using binary search
 * @array: input array
 * @left: left index of the subarray to search
 * @right: right index of the subarray to search
 * @value: value to search for
 * Return: index of the first occurrence of the value, or -1 if not found
 */
int rec_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (rec_search(array, left, mid, value));

	return (rec_search(array, mid + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array using binary search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the first occurrence of the value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (rec_search(array, 0, size - 1, value));
}
