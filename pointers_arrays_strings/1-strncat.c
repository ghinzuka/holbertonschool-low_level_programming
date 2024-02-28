#include "main.h"
/**
 *
 * *_strncat - concatenates two strings 
 *
 * @src: source
 * @n: n bytes
 * @dest: destination string
 *
 * Return: return destination
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	if (n != 0)
	{
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	}
	dest[i] = '\0';
	return (dest);
}
