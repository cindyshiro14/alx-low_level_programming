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
 *         If memory allocation fails, returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    unsigned int len1 = strlen(s1);
    unsigned int len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    char *result = malloc(len1 + n + 1);

    if (result == NULL)
        return (NULL);

    strcpy(result, s1);
    strncat(result, s2, n);

    return (result);
}
