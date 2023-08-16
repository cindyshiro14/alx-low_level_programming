#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /*standard library header for null */

/*function prototype for the  _putchar function*/
int _putchar(char c);

/* Function prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
