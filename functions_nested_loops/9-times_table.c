#include "main.h"

/**
 * times_table - print all time tables starting from 0
 * @r: number to check
 */

void times_table(void)
{
int n;
int r;
int result;
int a;
int b;

	for (n = 0; n <= 9; n++)
	{
		for (r = 0; r <= 9; r++)
		{
		result = n * r;
			if (result > 9)
			{
			b = result % 10;
			a = (result - b) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(a + '0');
			_putchar(b + '0');
			}
			else
			{
				if (r != 0)
				{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				}
			_putchar(result + '0');
			}

		}
		_putchar('\n');
	}
}
