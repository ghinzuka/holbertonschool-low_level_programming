#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - print n element of an array
 *
 * @a: value of variable
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
