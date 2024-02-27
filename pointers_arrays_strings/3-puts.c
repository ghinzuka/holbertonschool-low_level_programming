#include "main.h"

/**
 * _puts - function that prints a string folowed by new line to stdout
 *
 * @str: string to prints
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
