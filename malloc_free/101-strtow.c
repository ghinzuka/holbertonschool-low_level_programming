#include "main.h"

/**
 * count_str - Count the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */

int count_str(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
return (count);
}

/**
 * strtow - Write a function that splits a string into words.
 * @str: string to splits
 * Return: the pointer to array of strings
 */
char **strtow(char *str)
{
int i = 0, j = 0, k = 0;
int count = 0;
char **c;

if (str == NULL)
return (NULL);
count = count_str(str);
	c = (char **)malloc((count + 1) * sizeof(char *));
	if (c == NULL)
		return (NULL);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			j = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
				j++;
			}
			c[count] = (char *)malloc((j + 1) * sizeof(char));
			if (c[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(c[k]);
				free(c);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				c[count][k] = str[i - j + k];
			c[count][j] = '\0';
			count++;
		}
	}
c[count] = NULL;
return (c);
}
