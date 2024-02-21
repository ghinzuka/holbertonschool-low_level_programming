#include "main.h"

/**
 * _abs - check for absolute value
 * Descriptio: 'check if c is an alphabetical character'
 * @r: number to check
 * Return: 0 if code ok
 */

void times_table(void)
{
int n;
int r;
int result;

	for (n = 0; n < 10; n++)	
	{
		for (r = 0; r < 10; r++)
		{
		result = n * r;
		_putchar(result +'0');
		}
	}
}
