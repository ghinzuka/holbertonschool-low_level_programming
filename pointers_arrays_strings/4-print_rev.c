#include "main.h"

/**
 * print_rev - print a strin in reverse
 *
 *@s: string to check
 *
 */
void print_rev(char *s)
{
	int i = 0;
	int lenght = 1;

	while (*s++)
	{
		lenght++;
	}
	i = lenght;

		while (i >= 0)
		{
			_putchar(*s);
			i--;
			s--;
		}
	_putchar('\n');

}
