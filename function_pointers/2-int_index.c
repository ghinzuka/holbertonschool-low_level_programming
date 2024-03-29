#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: array to look in
 * @size: size of array
 * @cmp: function that compare
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
	return (-1);
}

if (array && cmp)
{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
}
return (-1);
}
