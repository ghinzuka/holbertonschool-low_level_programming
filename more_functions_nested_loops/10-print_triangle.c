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

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (space = size - (i + 1); space > 0; space--)
			{
				_putchar(' ');
			}
			for (b = 0; b <= i; b++)
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
