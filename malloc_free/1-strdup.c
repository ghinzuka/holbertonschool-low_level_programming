#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * @str: string
 * Return: the str
 */
char *_strdup(char *str)
{
int i;
int len;
char *mess;

if (str == 0)
{
	return (NULL);
}
for (i = 0; str[i]; i++)
{
	len++;
}

mess = malloc(sizeof(char) * len + 1);

if (mess == 0)
{
	return (NULL);
}
	for (i = 0; str[i]; i++)
	{
		mess[i] = str[i];
	}
return (mess);
}
