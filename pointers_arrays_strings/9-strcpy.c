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
	char *newdest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (newdest);
}
