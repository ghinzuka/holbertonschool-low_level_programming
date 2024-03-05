#include "main.h"
/**
 * _strpbrk - function that searched a string for any of a set of bytes
 * @s: string to detec
 * @accept: bytes to locates
 * Return: return accept or NYLL
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
