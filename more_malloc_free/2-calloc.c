#include "main.h"
/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 * @nmemb: element
 * @size: size of array
 * Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem = 0;
	unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}

mem = malloc(nmemb * sizeof(size));
if (mem == NULL)
{
	return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
	mem[i] = 0;
}
return (mem);

}
