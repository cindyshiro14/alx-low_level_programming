#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    if (!ptr)
    {
        return (malloc(new_size));
    }

    if (new_size <= old_size)
    {
        return (ptr);
    }

    void *new_ptr = malloc(new_size);
    if (!new_ptr)
    {
        free(ptr);
        return (NULL);
    }

    for (unsigned int i = 0; i < old_size; i++)
    {
        ((char *)new_ptr)[i] = ((char *)ptr)[i];
    }

    free(ptr);
    return (new_ptr);
}
