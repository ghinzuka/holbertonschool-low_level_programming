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
	if (r < 0)
	{		r = -r;

	}
	r = r % 10;

	_putchar(r + '0');

	return (r);

}
