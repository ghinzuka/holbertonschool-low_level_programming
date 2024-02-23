#include "main.h"

/**
 * times_table - print all time tables starting from 0
 */

void print_times_table(int n)
{
int r;
int result;
int a;
int b;
int c;

	if (n < 15 || n > 0)
	{
	for (c = 0; c <= n; c++)
	{
		for (r = 0; r <= n -1; r++)
		{
			result = c * r;
			b = result % 10;
			a = (result - b) / 10;
			_putchar(a + '0');
			_putchar(b + '0');

		}
		_putchar('\n');
	}
	}
	else
	{
	}
}
