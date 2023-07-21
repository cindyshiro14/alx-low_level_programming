#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Handle single-digit numbers or zero */
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		/* Recursively call the function for the rest of the digits */
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
