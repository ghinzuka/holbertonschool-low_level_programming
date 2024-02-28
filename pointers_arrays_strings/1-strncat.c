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

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] <= src[n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
