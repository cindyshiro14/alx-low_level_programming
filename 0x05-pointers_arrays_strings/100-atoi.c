#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}

	return (result * sign);
}
