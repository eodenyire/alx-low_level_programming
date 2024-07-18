#include "search_algos.h"

skiplist_t *recurse_normal(skiplist_t *probe, skiplist_t *stop, int value);
skiplist_t *recurse_express(skiplist_t *probe, int value);
skiplist_t *find_list_end(skiplist_t *probe);


/**
 * linear_skip - Search for a value in a skip list using the
 * 		linear skip algorithm.
 *               
 * @list: A pointer to the head of the skip list to search through.
 * @value: The integer value to search for within the skip list.
 *
 * Description:
 * This function searches for a specific value in a skip list by first
 * traversing the express lane to identify a potential block where the
 * value might be present. After locating the possible range, it performs
 * a linear search within that block to find the exact node containing
 * the value.
 *
 * Return: A pointer to the node containing the value if found, 
 *         otherwise NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *zone = NULL;

	if (list == NULL)
		return (NULL);

	zone = recurse_express(list, value);

	if (zone->n == value)
		return (zone);
	else
		return (recurse_normal(zone, zone->express, value));
}
/**
 * recurse_express - Search for a value in the express lane of a skip list.
 * @probe: A pointer to the current node in the skip list's express lane.
 * @value: The integer value to search for within the express lane.
 *
 * Description:
 * This function recursively searches through the express lane of a skip
 * list to locate a node or a range where the value might be present. 
 * If the express lane is exhausted or a node with a value greater than
 * or equal to the search value is found, the function identifies the
 * range within which to perform a linear search.
 *
 * Return: A pointer to the node where the value might be located or 
 *         the node immediately before the express lane node where the
 *         value might be in the next range. If the end of the express lane
 *         is reached without finding a range, it returns NULL.
 */

skiplist_t *recurse_express(skiplist_t *probe, int value)
{
	skiplist_t *last = NULL;

	if (probe->express == NULL)
	{
		last = find_list_end(probe);
		printf("Value found between indexes [%lu] and [%lu]\n",
probe->index, last->index);
		return (probe);
	}

	printf("Value checked at index [%lu] = [%d]\n",
probe->express->index, probe->express->n);

	if (probe->express->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
probe->index, probe->express->index);
		return (probe);
	}
	else
		return (recurse_express(probe->express, value));
}
/**
 * recurse_normal - search normal list
 * @probe: search pointer
 * @stop: endpoint of subsearch; either express node or NULL
 * @value: search value
 *
 * Return: pointer to match; NULL if not found
 */
skiplist_t *recurse_normal(skiplist_t *probe, skiplist_t *stop, int value)
{
	if (probe == stop)
	{
		if (stop != NULL && stop->n == value)
			return (stop);
		else
			return (NULL);
	}

	printf("Value checked at index [%lu] = [%d]\n",
probe->index, probe->n);

	if (probe->n == value)
		return (probe);
	else
		return (recurse_normal(probe->next, stop, value));
}
/**
 * find_list_end - find last node
 * @probe: search pointer
 *
 * Return: pointer to final node
 */
skiplist_t *find_list_end(skiplist_t *probe)
{
	if (probe->next == NULL)
		return (probe);
	else
		return (find_list_end(probe->next));
}
