#include <stdio.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of accepted characters.
 *
 * Return: The number of bytes in the initial segment of @s which consist
 *         only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;

while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
count++;
found = 1;
break;
}
a++;
}

if (found == 0)
break;

found = 0;
s++;
}

return (count);
}
