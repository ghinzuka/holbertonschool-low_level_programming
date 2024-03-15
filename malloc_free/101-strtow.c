#include "main.h"
/**
 * strtow - Write a function that splits a string into words.
 * @str - string to splits
 * Return: the pointer to array of strings
 */
char **strtow(char *str)
{
int i, j, len;
char **c;

	if (str == "" || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[len]; i++)
	{
		len++;
	}
	c = malloc(sizeof(char *) * len + 1)
		if (c == NULL)
			return (NULL);

}
