#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program for Task 2.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
int j = 0;
while (argv[i][j] != '\0')
{
_putchar(argv[i][j]);
j++;
}
_putchar('\n');
}

return (0);
}
