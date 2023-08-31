#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> // For NULL definition
#include <unistd.h> // For the write function

/* Function prototype for printing characters */
int _putchar(char c);

/* Function prototype for converting binary to unsigned int */
unsigned int binary_to_uint(const char *b);

/* Function prototype for printing the binary representation of a number */
void print_binary(unsigned long int n);

#endif /* MAIN_H */
