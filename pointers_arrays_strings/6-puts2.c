#include "main.h"
/**
 * puts2 - print every other character of a string
 *
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}

_putchar('\n');

}
