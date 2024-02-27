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
	int j = 0;

	while (s[j])
	{
		j++;
	}

	i = j - 1;

		while (i >= 0)
		{
			_putchar(s[i]);
			i--;

		}
	_putchar('\n');

}
