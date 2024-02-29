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
	int j = 32;
	char *c;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[c] = a[i] + j;
		}
		else 
		{
			a[c] = a[i];
		}
		a = c;
	}
	return (c);
}
