#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash; // Initialize hash variable to store the hash value
    int c; // Initialize variable to store each character of the string

    hash = 5381; // Initialize hash to the DJB2 algorithm's initial value
    while ((c = *str++)) // Iterate over each character of the string
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
        // Update the hash value using the DJB2 algorithm: hash * 33 + c
    }
    return (hash); // Return the final hash value
}

