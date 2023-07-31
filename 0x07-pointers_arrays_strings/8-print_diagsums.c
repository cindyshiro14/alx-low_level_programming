#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: 2D array representing the square matrix.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum1 += a[row * size + col];

			if (row + col == size - 1)
				sum2 += a[row * size + col];
		}
	}

	/* Print sum1 */
	if (sum1 >= 1000)
		_putchar(sum1 / 1000 + '0');
	if (sum1 >= 100)
		_putchar(sum1 / 100 % 10 + '0');
	if (sum1 >= 10)
		_putchar(sum1 / 10 % 10 + '0');
	_putchar(sum1 % 10 + '0');
	_putchar(',');

	/* Print sum2 */
	if (sum2 >= 1000)
		_putchar(sum2 / 1000 + '0');
	if (sum2 >= 100)
		_putchar(sum2 / 100 % 10 + '0');
	if (sum2 >= 10)
		_putchar(sum2 / 10 % 10 + '0');
	_putchar(sum2 % 10 + '0');
	_putchar('\n');
}
