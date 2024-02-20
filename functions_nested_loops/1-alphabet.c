#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Description: 'print the alphabet using while loop and _putchar proto'
 *
 * Return: void
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
