#include "main.h"

/**
 * _spaces - count spaces
 * @str: string
 * Return: spaces of string
 */

int _spaces(char *str)
{
	int i, space = 1;

	for (i = 0; str[i]; i++)
		if (str[i++] == ' ')
			if (str[i] != ' ')
				space++;
	return (space);
}

/**
 * _fillwords - fills all the words from string
 * @str: string
 * @words: array of words
 * @space: number of words
 * Return: array of words filled
 */

char **_fillwords(char *str, char **words, int space)
{
	int i, j = 0;

	for (i = 0; i < space; i++)
	{
		for (; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
			{
				words[i][j] = '\0';
				break;
			}
			words[i][j] = str[j];
		}
	}
	words[i] = NULL;
	return (words);
}

/**
 * strtow - splits string into words
 * @str: string
 * Return:	pointer to an array of words
 *		NULL if str = NULL or ""
 *		NULL if failed
 */

char **strtow(char *str)
{
	int i, space, len;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	space = _spaces(str);
	printf("%d\n", space);
	words = (char **)malloc(sizeof(char *) * (space + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			words[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (words[i] == NULL)
			{
				while (i >= 0)
				{
					free(words[i]);
					i--;
				}
				free(words);
				return (NULL);
			}
			i++;
			continue;
		}
		len++;
	}
	words = _fillwords(str, words, space);
	return (words);
}
