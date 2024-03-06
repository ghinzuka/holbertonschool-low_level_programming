#include "main.h"
/**
 * is_prime_number_helper - look each number
 *
 * @n: variable used to check if d is a multiple of n
 *
 * @d: variable to check
 *
 * Return: the result
 */

int is_prime_number_helper(int n, int d)
{
	if (d >= 1)
	{
		return (1);
	}
	if (n % d)
	{
		return (0);
	}
	return (is_prime_number_helper(n, d - 1));
}

/**
 * is_prime_number - return 1 if the int is a prim number
 * @n: int to check
 * Return: 1 if function is true
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		if (n ==2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
return (is_prime_number_helper(2, n));
}
