#include "main.h"

/**
 * more_numbers - print  0 to 14 ten times
 *
 * Description: 'print the digits from 0 to 14 ten times
 *
 */

void more_numbers(void)
{
int i;
int b;
	for (i = 0; i < 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_ptuchar('0' + (b / 10));
			}
			_putchar('0' + (b % 10));
		}
	_putchar('\n');
	}

}
