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

	while (n < 10)
	{
		putchar('0' + n);

		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');
	return (0);
}
