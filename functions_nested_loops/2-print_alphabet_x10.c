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
	char letter = 'a';
	int i;

	for (i = 0; i <= 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);

			letter++;
		}
	}


	_putchar('\n');

}
