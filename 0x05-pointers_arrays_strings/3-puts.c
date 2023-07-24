#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
