#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_name_as_is - Prints a name as it is.
 * @name: Pointer to the name to be printed.
 */
void print_name_as_is(char *name)
{
	while (*name)
	{
		putchar(*name);
		name++;
	}
	putchar('\n');
}

/**
 * print_name_uppercase - Prints a name in uppercase.
 * @name: Pointer to the name to be printed.
 */
void print_name_uppercase(char *name)
{
	while (*name)
	{
		if (*name >= 'a' && *name <= 'z')
			putchar(*name + 'A' - 'a');
		else
			putchar(*name);
		name++;
	}
	putchar('\n');
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	return (0);
}
