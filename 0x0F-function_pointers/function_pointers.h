#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /*standard library header for null */

/*function prototype for the  _putchar function*/
int _putchar(char c);

/* Function prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

/* Function prototype for array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
