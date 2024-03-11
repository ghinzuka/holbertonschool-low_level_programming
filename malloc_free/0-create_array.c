#include "main.h"
/**
 * create_array - creates an array of chars initializes it with a char
 * @size: first variable
 * @c: char
 * Return: 0 if ok or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}

	b = malloc(sizeof(char) * size);
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
return (b);
}
