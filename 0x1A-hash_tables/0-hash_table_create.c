#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with a given size.
 *
 * @size: Size of the hash table.
 * Return: Pointer to the newly created hash table, or NULL if function fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate memory for the hash table */
	hash_table_t *table;
	table = malloc(sizeof(hash_table_t));

	/* Check if memory allocation was successful */
	if (table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers to hash nodes */
	hash_node_t **array;
	array = malloc(sizeof(hash_node_t *) * size);

	/* Check if memory allocation was successful */
	if (array == NULL)
		return (NULL);

	/* Initialize all pointers in the array to NULL */
	unsigned long int i;
	for (i = 0; i < size; i++)
		array[i] = NULL;

	/* Assign the array and size to the hash table */
	table->array = array;
	table->size = size;

	/* Return the created hash table */
	return (table);
}

