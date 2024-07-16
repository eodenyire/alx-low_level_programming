#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev_index = 0;
    listint_t *prev = list, *current = list;

    if (list == NULL)
        return (NULL);

    while (current->next != NULL && current->n < value)
    {
        prev = current;
        prev_index = current->index;
        for (size_t i = 0; i < step && current->next != NULL; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev_index, current->index);
    while (prev != NULL && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
