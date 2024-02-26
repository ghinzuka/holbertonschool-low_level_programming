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

	if (size >= 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (b = size; b <= size; b++)
			{
				_putchar('#');
				b = b - 1;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
