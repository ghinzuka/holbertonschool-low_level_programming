#include "main.h"
/**
 * _memcpy - copy a memory area
 * @dest: destination
 * @src: source
 * @n: N bytes to copy
 * Return: the result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
