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
    if (nmemb == 0 || size == 0)
        return NULL;

    unsigned int total_size = nmemb * size;
    char *ptr = malloc(total_size);

    if (ptr == NULL)
        return NULL;

    for (unsigned int i = 0; i < total_size; i++)
        ptr[i] = 0;

    return ptr;
}
