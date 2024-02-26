#include "main.h"

/**
 * print_diagonal - print a diagonale of \  n times
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int i;
	int j;
if (n > 0)
{
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
}
else
{
	_putchar('\n');
}
}
