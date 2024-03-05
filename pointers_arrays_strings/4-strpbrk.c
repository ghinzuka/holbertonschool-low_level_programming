#include "main.h"
/**
 * _strpbrk - function that searched a string for any of a set of bytes
 * @s: string to detec
 * @accept: bytes to locates
 * Return: return accept or NYLL
 */
char *_strpbrk(char *s, char *accept)
{
char *ptr = s;
int j;

	for (; *ptr; ptr++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*ptr == accept[j])
			{
				return (ptr);
			}
		}
	}
	return ('\0');
}
