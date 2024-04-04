#include "main.h"
/**
 * flip_bits - returns the number of bits you would need 
 * to flip to get from one number to another
 * @n: number
 * @m:second number
 * Return: bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp = n ^ m;
	unsigned long int bits = 0;

	while (cmp > 0)
	{
		bits += (cmp & 1);
		cmp >>= 1;
	}

return (bits);

}