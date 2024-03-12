#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * Return: the array
 */

int *array_range(int min, int max)
{
	int *mem;
	int i = 0;
	int len;

	if (min > max)
	{
		return (NULL);
	}
	
	len = (max - min) + 1;

	mem = (int *) malloc(sizeof(int) * len);

	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		mem[i] = min + i;
	}
return (mem);
}
