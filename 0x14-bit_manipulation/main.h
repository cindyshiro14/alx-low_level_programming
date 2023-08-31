#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> 
#include <unistd.h>

/* Function prototype for printing characters */
int _putchar(char c);

/* Function prototype for converting binary to unsigned int */
unsigned int binary_to_uint(const char *b);

/* Function prototype for printing the binary representation of a number */
void print_binary(unsigned long int n);

/* Function prototype for getting the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Function prototype for setting the value of a bit at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Function prototype for clearing the value of a bit at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Function prototype for counting the number of bits needed to flip */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Function prototype for checking the endianness */
int get_endianness(void);

#endif /* MAIN_H */
