#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided.
 * @format: List of types of arguments passed to the function.
 * @...: The variable number of arguments to be printed.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";

va_start(args, format);

while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
separator = ", ";
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
break;
}
i++;
}

printf("\n");
va_end(args);
}
