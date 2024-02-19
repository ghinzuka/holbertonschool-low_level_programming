#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

/**
 * main - main functon
 *
 * Description: 'the function should print the alphabet in lowercase'
 *
 * Return: Always return  0
 */

int main(void)

{
	char n;
	char Up;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);

		for (Up = 'A'; Up <= 'Z'; Up++)
		{
			putchar(Up);
		}
	}

	putchar('\n');
	return (0);
}
