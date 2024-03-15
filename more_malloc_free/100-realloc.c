#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size to dealocate
 * @new_size: new size to realocate
 * Return: the pointer to new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			newptr[i] = ((char *)ptr)[i];
		}
	}
free(ptr);
return (newptr);
}
