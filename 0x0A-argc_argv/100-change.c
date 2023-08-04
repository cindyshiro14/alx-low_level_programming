#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_coins - Counts the minimum number of coins required for change.
 * @cents: The amount of cents.
 *
 * Return: The minimum number of coins.
 */
int count_coins(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}

	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}

	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}

	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}

	coins += cents;

	return (coins);
}

/**
 * main - Entry point of the program for the Change task.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", count_coins(cents));

	return (0);
}
