#include "main.h"

/**
 * print_fizz_buzz - Prints the numbers from 1 to 100 followed by a new line.
 *                   For multiples of three print Fizz instead of the number
 *                   and for the multiples of five print Buzz.
 *                   For numbers which are multiples of both three and five
 *                   print FizzBuzz.
 *
 * Return: No return value (void).
 */
void print_fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z'), _putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
		else if (i % 3 == 0)
			_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
		else if (i % 5 == 0)
			_putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
		else
			print_number(i);

		if (i < 100)
			_putchar(' ');
		else
			_putchar('\n');
	}
}
