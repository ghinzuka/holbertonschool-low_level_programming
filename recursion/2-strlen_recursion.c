#include "main.h"
/**
 * _strlen_recursion - return the lenght of string
 * @s: string to count
 * Return: lenght
 *
 */
int _strlen_recursion(char *s)
{
int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
