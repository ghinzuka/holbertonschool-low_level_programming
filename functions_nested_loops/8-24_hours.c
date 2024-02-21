#include "main.h"

/**
 * jack_bauer - show every minute from 00:00 to 23:59
 * @first: hours
 * @second: Minutes
 * Return: 0 if code ok
 */

void jack_bauer(void)
{
	int first, second;

	for (first = 0; first <= 23; first++)
	{
		for (second =0; second <=59; second++)
		{
		_putchar((first % 100) + '0');
		_putchar(':');
		_putchar((second % 100) +'0');
		_putchar('\n');
		}
	}

}
