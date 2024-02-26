#include "main.h"
/**
 * print_triangle - function that print a triangle
 *
 * @size: size of the triangle
 *
 * Return: 0 for success
 *
 */

void print_triangle(int size)
{
	int i;
	int b;
	int space;

	if (size >= 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = (size - 1); space >= 0; space--)
			{
				_putchar(' ');

					for (b = 1; b <= i; b++)
					{
					_putchar('#');
					}
			}
		_putchar('\n');
		}
	}
	_putchar('\n');
}
