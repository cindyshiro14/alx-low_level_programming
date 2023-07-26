#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to encode.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	int i;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		int index = 0;

		while (original[index])
		{
			if (c == original[index])
			{
				str[i] = rot13[index];
				break;
			}
			index++;
		}
	}
	return (str);
}
