#include "main.h"

/**
 * find_sqrt - Helper function to find the square root using recursion
 * @n: The input number for which to find the square root
 * @guess: The current guess for the square root
 *
 * Return: The natural square root, or -1 if no natural square root is found
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
return (find_sqrt(n, guess + 1));
}
}

/**
 * _sqrt_recursion - Returns natural square root of a number using recursion
 * @n: The input number for which to find the square root
 *
 * Return: The natural square root, or -1 if no natural square root is found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1); /* Return -1 for negative numbers (error) */
}
else if (n == 0 || n == 1)
{
return (n); /* The square root of 0 or 1 is itself */
}
else
{
return (find_sqrt(n, 1));
}
}
