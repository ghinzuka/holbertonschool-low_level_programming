#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @a: char to capitalize
 * Return: the capitalized letter
 */
char *cap_string(char *a)
{
	int i;
	int c;
	int j = 32;
	char spec[] = {' ', '\t', '\n', ',', ';', '.', '!'
		, '?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - j;
		}
		j = 0;
		for (c = 0; spec[c] != '\0'; c++)
		{
			if (spec[c] == a[i])
			{
				j = 32;
			}
		}
	}
	return (a);
}
