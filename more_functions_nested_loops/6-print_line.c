#include "main.h"

/**
 * print_line - print a line of _ n times
 * @n: number of lines
 */

void print_line(int n)
{
	int j;
if (n > 0)
{
	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
else
{
	_putchar('\n');
}
}
