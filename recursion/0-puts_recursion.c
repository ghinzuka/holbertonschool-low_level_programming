#include "main.h"

/**
 * _puts_recursion - Prints a string with a recusrion using putchar
 *
 * @s: char to print
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
