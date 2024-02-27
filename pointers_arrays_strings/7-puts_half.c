#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
int len;
int i = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	i = len / 2;
	while (i < len)
	{	
		if ((str[i] % 2) != 0)
		{
			_putchar(str[(len - 1) / 2]);
		}
		else
		{
		_putchar(str[i]);
		}
		i++;
	}

_putchar('\n');
}
