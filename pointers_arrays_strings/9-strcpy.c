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
	while (*src <= ('\0' + 1))
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
