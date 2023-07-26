#include "main.h"

/**
 * reverse_string - Reverses a string.
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (str[j] != '\0')
	{
		j++;
	}

	j--;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;

		i++;
		j--;
	}
}

/**
 * add_digit - Adds two digits along with the carry.
 * @digit1: The first digit.
 * @digit2: The second digit.
 * @carry: The carry from the previous addition.
 *
 * Return: The sum of the digits and the carry for the next addition.
 */
int add_digit(int digit1, int digit2, int *carry)
{
	int sum = digit1 + digit2 + *carry;
	*carry = sum / 10;
	return (sum % 10);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer that stores the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result, or 0 if result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k;
	int carry = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;

	for (j = 0; n2[j] != '\0'; j++)
		;

	if (i + 1 > size_r || j + 1 > size_r)
		return (0);

	r[size_r - 1] = '\0';
	i--;
	j--;
	k = size_r - 2;

	while (i >= 0 || j >= 0 || carry != 0)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		int sum = add_digit(digit1, digit2, &carry);

		r[k] = sum + '0';

		i--;
		j--;
		k--;
	}

	if (k >= 0 && r[k] != '0')
	{
		reverse_string(r + k);
		return (r + k);
	}
	else if (k == -1)
	{
		reverse_string(r + k + 1);
		return (r + k + 1);
	}

	return (0);
}
