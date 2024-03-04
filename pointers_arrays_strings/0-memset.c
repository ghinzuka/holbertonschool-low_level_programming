#include "main.h"
/**
 * _memset - function that fdills memory with a constant byte
 * @s: first variable
 * @b: costant byte
 * @n: number of bytes
 * Return: the value changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}
return (s);
}
