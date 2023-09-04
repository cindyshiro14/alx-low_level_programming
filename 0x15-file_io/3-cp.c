#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * error_exit - Print an error message and exit with the given status code.
 * @exit_code: The exit status code.
 * @message: The error message to print.
 */
void error_exit(int exit_code, const char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, or exit with an error code on failure.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, read_bytes, write_bytes;
    char buffer[BUFSIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to");

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
        error_exit(98, "Error: Can't read from file");

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
        error_exit(99, "Error: Can't write to file");

    while ((read_bytes = read(file_from, buffer, BUFSIZE)) > 0)
    {
        write_bytes = write(file_to, buffer, read_bytes);
        if (write_bytes == -1)
            error_exit(99, "Error: Can't write to file");
    }

    if (read_bytes == -1)
        error_exit(98, "Error: Can't read from file");

    if (close(file_from) == -1)
        error_exit(100, "Error: Can't close fd");

    if (close(file_to) == -1)
        error_exit(100, "Error: Can't close fd");

    return (0);
}
