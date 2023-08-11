#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to the newly allocated concatenated string
 *         If memory allocation fails or s1/s2 is NULL, returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0;
    unsigned int len2 = 0;
    char *concatenated;
    unsigned int i;

    if (s1 != NULL)
        len1 = strlen(s1);
    if (s2 != NULL)
        len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    concatenated = malloc(len1 + n + 1);

    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (i = 0; i < n; i++)
        concatenated[len1 + i] = s2[i];

    concatenated[len1 + n] = '\0';

    return (concatenated);
}
