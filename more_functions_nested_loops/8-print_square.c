#include "main.h"

/**
 * print_square - print a diagonale of \  n times
 * @n: number of lines
 */

void print_square(int size)
{
	int i;
	int j;
if (n > 0)
{
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j != 0)
			{
				_putchar(' ');
			}
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
