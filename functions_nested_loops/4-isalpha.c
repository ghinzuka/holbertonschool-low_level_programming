#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * Description: 'check if c is an alphabetical character'
 *  @c: character to check
 *
 * Return: 1 if lowercase
 * Return 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);

}
