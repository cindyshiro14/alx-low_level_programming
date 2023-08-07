#include "main.h"
#include <stdlib.h>

/**
 * create_array-Creates array of chars and initializes with a specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: On success, returns a pointer to the array. Otherwise, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
