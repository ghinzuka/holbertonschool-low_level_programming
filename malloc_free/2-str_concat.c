#include "main.h"
/**
 * str_concat : Write a function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: return NULL or the string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len = 0;
	int lentotale = 0;
	int len1 = 0;
	char *mess;

if (s1 == 0)
{
s1 = "";
}
if (s2 == 0)
{
	s2 = "";
}

for (i = 0; s2[i]; i++)
{
	len++;
}
for (i = 0; s1[i]; i++)
{
	len1++;
}

lentotale = len + len1;

mess = malloc(sizeof(char) * lentotale);
if (mess == NULL)
{
	return (NULL);
}
for (i = 0; i < len1; i++)
{
	mess[i] = s1[i];
}
for (i = 0; i < len; i++)
{
	mess[i + len1] = s2[i];
}
return (mess);
}
