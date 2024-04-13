#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table;        /* Pointer to the hash table structure */
    hash_node_t **array;        /* Array of hash node pointers */
    unsigned long int i;        /* Loop counter */

    /* Allocate memory for the hash table structure */
    table = malloc(sizeof(hash_table_t));
    if (table == NULL)
        return (NULL);

    /* Allocate memory for the array of hash node pointers */
    array = malloc(sizeof(hash_node_t *) * size);
    if (array == NULL)
        return (NULL);

    /* Initialize each element of the array to NULL */
    for (i = 0; i < size; i++)
        array[i] = NULL;

    /* Assign the array and size to the hash table structure */
    table->array = array;
    table->size = size;

    return (table);
}

