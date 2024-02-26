#include "main.h"

/**
 * _islower - check for uppercase
 *
 * Description: 'check for uppercase'
 *  @c: character to check
 *
 * Return: 1 if uppercase
 * Return 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);

}
