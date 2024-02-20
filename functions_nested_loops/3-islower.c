#include "main.h"

/**
 * _islower - check for lowercase
 *
 * Description: 'print the alphabet using while loop and _putchar proto'
 *  @c: character to check
 *
 * Return: 1 if lowercase
 * Return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);

}
