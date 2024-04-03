#include "main.h"
/**
 * binary_to_uint - convert char binary into unsigned int
 * @b: string of char to convert in unsigned int
 * Return: unsigned int number
 *
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		n = (2 * n) + (b[i] - 48);
	}
	return (n);
}
