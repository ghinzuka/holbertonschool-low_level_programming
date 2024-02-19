#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

/**
 * main - main functon
 *
 * Description: 'print the alphabet in lowercase except q & e'
 *
 * Return: Always return  0
 */

int main(void)

{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
		putchar(n);
		}
	}

	putchar('\n');
	return (0);
}
