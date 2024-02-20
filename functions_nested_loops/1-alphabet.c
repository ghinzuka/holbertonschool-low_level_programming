#include "main.h"

/**
 * main - main functon
 *
 * Description: 'print _putchar using write function.'
 *
 * Return: Always return 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');

}
