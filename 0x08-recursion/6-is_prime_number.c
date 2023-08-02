#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The number to be checked
 * @i: The current divisor to check for primality
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1 || (n % i == 0 && i != n))
	return (0); /* Not a prime number */
	else if (i * i > n)
	return (1); /* Prime number */
	else
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The input number to be checked for primality
 *
 * Return: (1) if the number is prime, (0) otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0); /* Not a prime number */
	else
	return (is_prime_helper(n, 2));
}
