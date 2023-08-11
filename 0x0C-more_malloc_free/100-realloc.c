#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the old memory block
 * @new_size: Size of the new memory block
 *
 * Return: Pointer to the newly reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    /* Copy contents from old block to new block */
    char *old_ptr = ptr;
    char *new_ptr_char = new_ptr;
    unsigned int min_size = (old_size < new_size) ? old_size : new_size;
    for (unsigned int i = 0; i < min_size; i++)
    {
        new_ptr_char[i] = old_ptr[i];
    }

    /* Free the old block */
    free(ptr);

    return (new_ptr);
}
