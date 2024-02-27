#include "main.h"
/**
 * puts2 - print every other character of a string
 *
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		if (str[i + 2])
			i += 2;
	}

_putchar('\n');

}
