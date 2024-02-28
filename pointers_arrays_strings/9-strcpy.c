#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to
 *
 * @dest: destination
 * @src: Source
 *
 * Return: return the new destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((src[i] + 1))
	{
		dest[i] = src[i];
		i++;
	}
	
	return (dest);
}
