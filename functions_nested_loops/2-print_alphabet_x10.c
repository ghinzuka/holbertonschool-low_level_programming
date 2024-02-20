#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10x
 *
 * Description: 'print the alphabet using 2  while loop and _putchar proto'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);

		}
	}


	_putchar('\n');

}
