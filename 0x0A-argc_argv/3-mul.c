#include "main.h"
#include <stdlib.h> /* for atoi */

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
int result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);

return (0);
}
