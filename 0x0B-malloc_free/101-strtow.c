#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
    int i, words = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            words++;
            while (str[i] && str[i] != ' ')
                i++;
        }
    }

    return words;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, word_count;

    if (str == NULL || str[0] == '\0')
        return NULL;

    word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    i = 0;
    j = 0;
    while (str[i])
    {
        while (str[i] == ' ')
            i++;

        k = 0;
        while (str[i + k] && str[i + k] != ' ')
            k++;

        words[j] = malloc((k + 1) * sizeof(char));
        if (words[j] == NULL)
        {
            for (k = 0; k < j; k++)
                free(words[k]);
            free(words);
            return NULL;
        }

        for (k = 0; str[i] && str[i] != ' '; i++, k++)
            words[j][k] = str[i];

        words[j][k] = '\0';
        j++;
    }
    words[j] = NULL;

    return words;
}
