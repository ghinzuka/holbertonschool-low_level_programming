#include "main.h"

/**
 * _strlen - function return the lenght of strin
 *
 * @s: string the return
 *
 * Return: 0 if success
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
