#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with a given size
 * @size: Size of the hash table
 *
 * Returns: A pointer to the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *table; // Declare a pointer to a hash table structure
        hash_node_t **array; // Declare a double pointer to a hash node structure
        unsigned long int i; // Declare a variable for iteration

        // Allocate memory for the hash table structure
        table = malloc(sizeof(hash_table_t));
        if (table == NULL)
                return (NULL);

        // Allocate memory for the array of hash node pointers
        array = malloc(sizeof(hash_node_t *) * size);
        if (array == NULL)
                return (NULL);

        // Initialize each element of the array to NULL
        for (i = 0; i < size; i++)
                array[i] = NULL;

        // Set the attributes of the hash table structure
        table->array = array;
        table->size = size;

        return (table); // Return the created hash table
}

