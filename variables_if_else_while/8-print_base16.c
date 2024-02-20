#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

/**
 * main - main functon
 *
 * Description: 'print all number of base 16'
 *
 * Return: Always return  0
 */

int main(void)

{
	char n;
	int m;

	for (m = 0; m <= 9; m++)

	{

	putchar('0' + m);

	for (n = 'a'; n <= 'f'; n++)

	{
		putchar(n);

	}

	}

	putchar('\n');
	return (0);
}
