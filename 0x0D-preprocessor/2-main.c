#include <stdio.h>

/**
 * main - Prints the name of the current source file.
 *
 * Description: This program demonstrates the usage of the __FILE__ predefined
 * macro to print the name of the current source file. The program outputs the
 * name of the file it was compiled from.
 *
 * Return: Always 0 (indicating success).
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
