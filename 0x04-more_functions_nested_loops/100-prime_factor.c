#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number n
 */
long largest_prime_factor(long n)
{
	long largest_factor = 2;

	while (n > largest_factor)
	{
		if (n % largest_factor == 0)
			n /= largest_factor;
		else
			largest_factor++;
	}

	return (largest_factor);
}
