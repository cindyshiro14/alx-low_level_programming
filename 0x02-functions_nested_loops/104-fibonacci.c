#include <stdio.h>

#define FIBONACCI_LENGTH 98

/**
 * print_array - Prints an array of digits
 * @array: The array to print
 * @size: The size of the array
 */
void print_array(int *array, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * fibonacci - Computes the first 98 Fibonacci numbers
 */
void fibonacci(void)
{
	int fib[FIBONACCI_LENGTH] = {0};
	int i, carry, temp, j;

	fib[FIBONACCI_LENGTH - 1] = 1;

	for (i = 2; i <= FIBONACCI_LENGTH; i++)
	{
		carry = 0;
		for (j = FIBONACCI_LENGTH - 1; j >= 0; j--)
		{
			temp = fib[j] * i + carry;
			carry = temp / 1000000000;
			fib[j] = temp % 1000000000;
		}
	}

	print_array(fib, FIBONACCI_LENGTH);
}

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci();
	return (0);
}
