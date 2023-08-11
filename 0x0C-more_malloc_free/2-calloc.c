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
    char *char_ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return (NULL);

    char_ptr = ptr;

    for (i = 0; i < nmemb * size; i++)
        char_ptr[i] = 0;

    return (ptr);
}
