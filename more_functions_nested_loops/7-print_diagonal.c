#include "main.h"

/**
 * print_diagonal - print a diagonale of \  n times
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int j;
	int i;

if (n > 0)
{
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= n; i++)
		{
		_putchar('\\');
		}
	}
	_putchar('\n');
}
else
{
	_putchar('\n');
}
}
