#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a random valid password for 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 2772; /* Sum of ASCII values required for 101-crackme */
	int random;
	char c;

	srand(time(0)); /* Seed the random number generator */

	while (sum > 126) /* 126 is the ASCII value of '~', the highest printable character */
	{
		random = rand() % 125 + 1; /* Generate a random number between 1 and 125 */

		/* Exclude characters that are not part of valid passwords */
		if (random == 34 || random == 39 || random == 40 || random == 41 || random == 44 || random == 46 || random == 47 || random == 59 || random == 96)
			continue;

		c = (char)random; /* Convert random number to character */

		putchar(c); /* Print the character */
		sum -= random; /* Update the sum for the next character */
	}

	/* Print the last required character */
	putchar(sum);

	return (0);
}
