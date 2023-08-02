#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: The input string
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1); /* Base case: Palindrome */
	else if (s[start] != s[end])
		return (0); /* Not a palindrome */
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
