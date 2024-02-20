#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

/**
 * main - main functon
 *
 * Description: 'digit folow by a ',' and a ' ' using while and and if'
 *
 * Return: Always return  0
 */

int main(void)

{
	int n = 0;

	while (x < 10)
	{
		putchar('0' + n);

		if (x < 9)
		{
			putchar(','' ');
		}

		x++;
	}

	putchar('\n');
	return (0);
}
