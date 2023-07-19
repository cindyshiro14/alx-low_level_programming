#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms in the
 *              Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next_fib, sum = 2;

	while (1)
	{
		next_fib = fib1 + fib2;

		if (next_fib > 4000000)
			break;

		if (next_fib % 2 == 0)
			sum += next_fib;

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("%ld\n", sum);
	return (0);
}
