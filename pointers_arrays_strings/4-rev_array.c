#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: number a to reverse
 * @n number of element to reverse
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int first;
int last;

	for (i = 0, j = (n - 1); i < (n / 2); i++, j--)
	{
		first = a[i];
		last = a[j];
		a[i] = last;
		a[j] = first;
	}
}
