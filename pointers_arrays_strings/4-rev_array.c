#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: number a to reverse
 * @n number of element to reverse
 */
void reverse_array(int *a, int n)
{
int len = 0;
int j;
int i;
int temp;

	while (a[len] <= a[n])
	{
	len++;
	}
	for (i = 0, j = (len - 1); i <= j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

	}


}
