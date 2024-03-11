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

for (i = 0; str[i]; i++)
{
	len++;
}
if (str == NULL)
{
	return (NULL);
}

mess = malloc(sizeof(char) * len);
if (mess == 0)
{
	return (NULL);
}
	for (i = 0; i < len; i++)
	{
		mess[i] = str[i];
	}
return (mess);
}
