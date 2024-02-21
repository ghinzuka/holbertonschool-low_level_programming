#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - print all int number from n to 98
 * @n: entered value
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
			printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
			printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
