#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 *         If nmemb or size is 0, returns NULL
 *         If memory allocation fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

return (ptr);
}
