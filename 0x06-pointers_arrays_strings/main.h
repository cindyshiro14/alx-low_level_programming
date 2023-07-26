#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Task 0: Concatenates two strings */
char *_strcat(char *dest, char *src);

/* Task 1: Concatenates two strings using at most n bytes */
char *_strncat(char *dest, char *src, int n);

/* Task 2: Copies a string */
char *_strncpy(char *dest, char *src, int n);

/* Task 3: Compares two strings */
int _strcmp(char *s1, char *s2);

/* Task 4: Reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* Task 5: Changes all lowercase letters of a string to uppercase */
char *string_toupper(char *str);

/* Task 6: Capitalizes all words of a string */
char *cap_string(char *str);

/* Task 7: Encodes a string into 1337 */
char *leet(char *str);

/* Task 8: Encodes a string using rot13 */
char *rot13(char *str);

/* Task 9: Prints an integer */
void print_number(int n);

/* Task 11: Adds two numbers */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* Task 12: Prints a buffer */
void print_buffer(char *buffer, int size);

#endif /* MAIN_H */
