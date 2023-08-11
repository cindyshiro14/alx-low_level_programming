#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two positive numbers
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_positive_number(num1) || !is_positive_number(num2))
    {
        printf("Error\n");
        return 98;
    }

    int len1 = string_length(num1);
    int len2 = string_length(num2);
    int result_len = len1 + len2;
    int *result = malloc(sizeof(int) * result_len);

    if (result == NULL)
    {
        printf("Error\n");
        return 98;
    }

    initialize_result(result, result_len);
    perform_multiplication(num1, num2, len1, len2, result);

    print_result(result, result_len);
    free(result);

    return 0;
}

/**
 * is_positive_number - Check if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * string_length - Calculate the length of a string
 * @str: The input string
 *
 * Return: Length of the string
 */
int string_length(char *str)
{
    int length = 0;
    while (str[length])
        length++;
    return length;
}

/**
 * initialize_result - Initialize result array with zeros
 * @result: The result array
 * @length: The length of the result array
 */
void initialize_result(int *result, int length)
{
    for (int i = 0; i < length; i++)
        result[i] = 0;
}

/**
 * perform_multiplication - Perform multiplication of two numbers
 * @num1: First number as string
 * @num2: Second number as string
 * @len1: Length of num1
 * @len2: Length of num2
 * @result: Array to store result
 */
void perform_multiplication(char *num1, char *num2, int len1, int len2, int *result)
{
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';
            int product = (n1 * n2) + result[i + j + 1] + carry;

            carry = product / 10;
            result[i + j + 1] = product % 10;
        }

        result[i] += carry;
    }
}

/**
 * print_result - Print the result array
 * @result: The result array
 * @length: The length of the result array
 */
void print_result(int *result, int length)
{
    int start = 0;
    while (start < length && result[start] == 0)
        start++;

    if (start == length)
        putchar('0');
    else
    {
        for (int i = start; i < length; i++)
            putchar(result[i] + '0');
    }

    putchar('\n');
}
