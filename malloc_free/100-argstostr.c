#include "main.h"
/**
 * argstostr - function that concatenates all arguments of a program
 * @ac: arguments
 * @av: numbers of char to memory
 * Return: NULL if fail or the pointer
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0;
char *c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	c = malloc(sizeof(char) * len + 1 + ac);
	if (c == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[len] = av[i][j];
			len++;
		}
		if (c[len] == '\0')
		{
		c[len++] = '\n';
		}
	}

	return (c);

}
