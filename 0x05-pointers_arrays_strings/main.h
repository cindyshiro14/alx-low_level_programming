#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* 0. Function that prints a string */
void _putchar(char c);

/* 1. Function that swaps the values of two integers */
void swap_int(int *a, int *b);

/* 2. Function that returns the length of a string */
int _strlen(char *s);

/* 3. Function that prints a string, followed by a new line */
void _puts(char *str);

/* 4. Function that prints a string in reverse */
void print_rev(char *s);

/* 5. Function that reverses a string */
void rev_string(char *s);

/* 6. Function that prints every other character of a string */
void puts2(char *str);

/* 7. Function that prints half of a string */
void puts_half(char *str);

/* 8. Function that prints n elements of an array of integers */
void print_array(int *a, int n);

/* 9. Function that copies the string pointed to by src to dest */
char *_strcpy(char *dest, char *src);

/* 10. Function that converts a string to an integer */
int _atoi(char *s);

/* 11. Function that generates random valid passwords for 101-crackme */
int main(void);

#endif /* MAIN_H */

