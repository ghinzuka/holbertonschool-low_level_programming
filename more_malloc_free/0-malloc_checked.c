#include "main.h"
/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: size of the int memory we need to asign space to
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = (int *) malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);

}
