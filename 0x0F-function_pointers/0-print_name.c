#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a specified printing function
 * @name: name to print
 * @f: pointer to the printing function to use
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
