#include "main.h"

/**
 * print_number - Print a number with proper formatting.
 * @num: The number to print.
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		_putchar(num / 100 + '0');
		_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');
	}
}

/**
 * print_times_table - Print the n times table, starting with 0.
 * @n: The number of times table to print.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(result);
			}
		}
		_putchar('\n');
	}
}
