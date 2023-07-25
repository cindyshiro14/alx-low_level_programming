#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer
 * @s: char type string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			/* Check for overflow */
			if (result > (INT_MAX - digit) / 10)
			{
				return (sign == -1 ? INT_MIN : INT_MAX);
			}

			result = result * 10 + digit;
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}
