#include "main.h"

/**
 * print_square - print a diagonale of \  n times
 * @n: number of lines
 */

void print_square(int size)
{
	int i;
	int j;
if (size > 0)
{
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
else
{
	_putchar('\n');
}
}
