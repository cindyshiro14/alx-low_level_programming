#include <stddef.h> /* For size_t */

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        int *end = array + size; // Pointer to the end of the array

        for (; array < end; array++)
        {
            action(*array);
        }
    }
}
