#include "main.h"
/**
 * _strcat - function to concatenates two strings
 *
 *@dest: destination
 *@src: source
 * Return: destination with source strings
 */
char *_strcat(char *dest, char *src)
{

int i = 0;
int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (src[j] <= i)
	{
		dest[j + i] = src[j];
		j++;
	}
	return (dest);
}
