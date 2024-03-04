#include "main.h"
/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: initiale segment
 * @accept: byte to gets
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s++)
	{
		while (*accept++)
		{
			if (*accept == *s)
			{
				len = len + 1;
				accept++;
				s++;
			}
		}
	}
	return (len);
}
