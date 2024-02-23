#include "main.h"

/**
 * times_table - print all time tables starting from 0
 */

void print_times_table(int n);
{
int r = 0;
int result;
int a;
int b;
int c = 0;

	if (n > 15 || n < 0)
	{
	for (c; c <= n; c++)
	{
		for (r; r <= n; r++)
		{
		result = c * r;
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

}
