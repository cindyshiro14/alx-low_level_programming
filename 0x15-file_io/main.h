#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int putchar(int c);

#endif /* MAIN_H */
