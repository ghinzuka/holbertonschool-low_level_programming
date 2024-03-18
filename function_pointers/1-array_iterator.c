#include "function_pointers.h"
/**
 * array_iterator - executes a function parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: function action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i = size;

	while (size > 0)
	{
		action(array[i - size]);
		size--;
	}
}
