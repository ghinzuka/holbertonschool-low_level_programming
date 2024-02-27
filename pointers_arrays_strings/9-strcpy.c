#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to
 *
 * @dest: destination
 * @src: Source
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (*src <= (i + 1))
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
