#include "main.h"

/**
 * times_table - print all time tables starting from 0
 */

void print_times_table(int n)
{
int r;
int result;
int c;
int a;
int b;

	if (n < 15 || n > 0)
	{
	for (c = 0; c <= n; c++)
	{
		for (r = 0; r <= n; r++)
		{
			result = c * r;
			if (result > 9)
			{
			b = result % 10;
			a = (result - b) / 10;
			_putchar(44);
			_putchar(32);
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
				_putchar(32);
				} 
			_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
	}
}
