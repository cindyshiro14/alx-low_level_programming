#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in memory
 * @str: The string to be duplicated
 *
 * Return: On success, returns a pointer to the duplicated string.
 *          On failure, returns NULL.
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int len = 0, i;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup_str = malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup_str[i] = str[i];

return (dup_str);
}
