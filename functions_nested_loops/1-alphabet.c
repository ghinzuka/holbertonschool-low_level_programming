#include "main.h"

/**
 * main - main functon
 *
 * Description: 'print _putchar using write function.'
 *
 * Return: Always return 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);

		letter++;
	}
	_putchar('\n');
	return (0);
}
