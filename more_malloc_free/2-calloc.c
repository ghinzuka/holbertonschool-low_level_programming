#include "main.h"
/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 * @nmemb: element
 * @size: size of array
 * Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i = 0;

if (nmemb == 0)
{
	return (NULL);
}
if (size == 0)
{
	return (NULL);
}

mem = malloc(nmemb * size);
if (mem == NULL)
{
	return (NULL);
}
else
{
	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = 0;
	}
}
return (mem);
}
