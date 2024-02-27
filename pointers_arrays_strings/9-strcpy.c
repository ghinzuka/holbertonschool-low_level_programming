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
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}
