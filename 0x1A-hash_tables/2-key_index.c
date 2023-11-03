#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key to find the index for
 * @size: Size of the array of the hash table
 *
 * Return: Index where the key/value pair should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value, index;

/* Calculate hash value using djb2 hash function */
hash_value = hash_djb2(key);

/* Obtain index using hash value and hash table size */
index = hash_value % size;

return (index);
}
