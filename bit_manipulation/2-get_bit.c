#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index starting from 0 of the bit you want to get
 * @n: the bit
 * Return: -1 if fail or 1 if bit is 1 or 0 if 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
return (1);
}
