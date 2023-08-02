#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The input number for which to find the factorial
 *
 * Return: The factorial of the number, or (-1) for errors
 */
int factorial(int n)
{
if (n < 0)
{
return (-1); /* Return -1 for negative numbers (error) */
}
else if (n == 0)
{
return (1); /* Return 1 for factorial of 0 */
}
else
{
return (n * factorial(n - 1)); /* Recursive calculation of factorial */
}
}
