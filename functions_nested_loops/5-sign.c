#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * Description: 'print the sign of a number + - 0'
 *  @n: character to check
 *
 * Return: 1 and print + if greater
 * Return 0 and print 0 if zero
 * return -1 and print -1 if minus
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
			else if (n < 0)
			{
				_putchar('-');
				return (-1);
			}
return (0);

}
