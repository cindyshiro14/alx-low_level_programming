#include <stdio.h>
#include "function_pointers.h"

/* Calls a function to print a name */
void print_name(char *name, void (*f)(char *));

/* Prints a name as it is */
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}

/* Prints a name in uppercase */
void print_name_uppercase(char *name)
{
unsigned int i;
printf("Hello, my uppercase name is ");
i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
}

/* Entry point of the program */
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
return (0);
}

/* Calls the provided function to print the name */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
