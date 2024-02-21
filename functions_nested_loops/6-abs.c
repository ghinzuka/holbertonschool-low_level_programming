#include "main.h"

/**
 * _abs - check for absolute value
 *
 * Description: 'check if c is an alphabetical character'
 *
 * always return 0
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
		_putchar(r);
	}
	else
	{
		_putchar(r);
	}
	return (0);

}
