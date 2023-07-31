#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};
    unsigned int i;

    for (i = 0; i < 98; i++)
    {
        _putchar(buffer[i]);
    }
    _memset(buffer, 0x01, 95);
    _putchar('\n');
    for (i = 0; i < 98; i++)
    {
        _putchar(buffer[i]);
    }
    _putchar('\n');
    return (0);
}
