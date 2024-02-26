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
			for (b = 1; b <= size; b++)
			{
				_putchar("#");
			}
			_putchar("\n");
		}
	}
	else 
	{
	_putchar("\n");
	}
}
