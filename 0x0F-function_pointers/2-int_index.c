#include <stddef.h> /* For size_t */

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which the cmp function does not return 0,
 *         -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL && size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (cmp(array[i]) != 0)
                return i;
        }
    }
    return -1;
}

