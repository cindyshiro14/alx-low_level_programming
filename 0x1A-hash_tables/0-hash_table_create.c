#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table, or NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = NULL;

if (size < 1)
return (NULL); /*Invalid size*/

/* Allocate memory for the hash table structure*/
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL); /* Memory allocation failed*/

/*Allocate memory for the array of hash_node_t pointers*/
hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (hash_table->array == NULL)
{
free(hash_table);
return (NULL); /*Memory allocation failed*/
}

/*Initialize the hash table size*/
hash_table->size = size;

return (hash_table);
}
