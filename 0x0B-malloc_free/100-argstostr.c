#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: On success, returns a pointer to the concatenated string.
 * On failure or if ac == 0 or av == NULL, returns NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++; /* Add 1 for the newline character */
	}

	/* Allocate memory for the concatenated string */
	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy each argument to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}

	str[len] = '\0'; /* Add null-terminator at the end */

	return (str);
}
