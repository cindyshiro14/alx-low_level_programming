#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit needs to be printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Get the absolute value of n */
	if (n < 0)
		n = -n;

	/* Handle special case for INT_MIN */
	if (n == 0 || n == 1 << (sizeof(int) * 8 - 1))
	{
		_putchar('0' + n % 10);
		return (n % 10);
	}

	/* Get the last digit */
	last_digit = n % 10;

	/* Print the last digit */
	_putchar('0' + last_digit);

	/* Return the value of the last digit */
	return (last_digit);
}
