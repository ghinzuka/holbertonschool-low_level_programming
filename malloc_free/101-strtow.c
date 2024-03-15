#include "main.h"
/**
 * strtow - Write a function that splits a string into words.
 * @str - string to splits
 * Return: the pointer to array of strings
 */
char **strtow(char *str)
{
int i = 0, j = 0, k = 0;
int count = 0;
char **c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}

	count++;

	c = (char **)malloc(count * sizeof(char *));
	if (c == NULL)
	{
		return (NULL);
	}
	count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			c[count] = (char *)malloc((j + 1) * sizeof(char));
			if (c[count] == NULL)
			{
				return (NULL);
			}
			for (k = 0; k < j; k++)
			{
				c[count][k] = str[i - j + k];
			}
			c[count][j] = '\0';
			count++;
			j = 0;
		}
		else
		{
			j++;
		}
	}
return (c);
}
