#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main functon
 *
 * Description: 'prints all possible different combinations of three digits.'
 *
 * Return: Always return  0
 */

int main(void)

{
	int n;
	int m;
	int s;

	for (s = 0; s <= 9; s++)
	{
		for (n = (s + 1); n <= 9; n++)
		{
			for (m = (n + 1); m <= 9; m++)
			{	
					putchar('0' + s);
					putchar('0' + n);
					putchar('0' + m);
					if (s < 7)
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
