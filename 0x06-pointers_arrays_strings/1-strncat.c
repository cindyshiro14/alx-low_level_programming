#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes from src to be appended to dest.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int dest_len = 0;

	/* Find the length of the destination string */
	while (*dest)
	{
		dest++;
		dest_len++;
	}

	/* Append at most n bytes from src to dest */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add null terminator to the end of the new string */
	*dest = '\0';

	return (temp);
}
