#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main functon
 *
 * Description: 'prints all possible different combinations of two digits.'
 *
 * Return: Always return  0
 */

int main(void)

{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = (n + 1); m <= 9; m++)
		{
			if (n != m)
			{
				putchar('0' + n);
				putchar('0' + m);
				if (n < 8)
				{
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

