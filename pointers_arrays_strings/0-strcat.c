#include "main.h"
/**
 * *_strcat - function to concatenates two strings
 *
 *@dest: destination 
 *@src: source
 */
char *_strcat(char *dest, char *src)
{

int i = 0;
int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	return (dest);
}
