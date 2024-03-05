#include "main.h"
/**
 * _strlen_recursion - return the lenght of string
 * @s: string to count
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
static int i;

	if (*s != '\0')
	{
		i++;
		return (_strlen_recursion(s + 1));
	}
	return (i);
}
