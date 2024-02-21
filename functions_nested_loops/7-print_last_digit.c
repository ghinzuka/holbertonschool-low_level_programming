#include "main.h"

/**
 * print_last_digit - check last digit
 * 
 * @r: number to check
 *
 * Return: 0 if code ok
 */

int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
	{		
		r = -r;
	}

	_putchar(r + '0');

	return (r);

}
