#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string, incrementing by 2 each time */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
