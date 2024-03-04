#include "main.h"
/**
 * _strchr - function that locates a character string
 * @s: string to check
 * @c: char to search
 * Return: the char
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
	if (*s == c)
	{
		return (s);
	}
	}
return ('\0');
}
