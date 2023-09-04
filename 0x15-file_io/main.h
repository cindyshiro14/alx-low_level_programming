#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int exit_code, const char *message);
void print_elf_header(Elf64_Ehdr *header);
int putchar(int c);

#endif /* MAIN_H */

