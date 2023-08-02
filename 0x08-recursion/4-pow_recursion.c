#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base value
 * @y: The exponent value
 *
 * Return: The value of x raised to the power of y, or -1 for errors
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1); /* Return -1 for negative exponent (error) */
}
else if (y == 0)
{
return (1); /* Any number raised to the power of 0 is 1 */
}
else
{
return (x * _pow_recursion(x, y - 1)); /* Recursive calculation */
}
}
