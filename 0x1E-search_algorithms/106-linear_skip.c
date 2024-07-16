#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 *               using a linear search algorithm.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev = list, *current = list;

    if (list == NULL)
        return (NULL);

    while (current->express != NULL)
    {
        prev = current;
        current = current->express;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
    }

    if (current->express == NULL)
    {
        prev = current;
        while (current->next != NULL)
            current = current->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    while (prev != NULL && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
