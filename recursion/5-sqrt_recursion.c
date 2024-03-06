#include "main.h"
/**
 * helper - loop to find the smallest int
 * @n: int to check
 * @result: the goal to reach
 * Return: return the result
 */
int helper(int n, int result)
{
	if (result * result == n)
	{
		return (result);
	}
	else if (result * result > n)
	{
		return (result - 1);
	}
	else
		return (helper(n, result + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 *
 * @n: int
 *
 * Return: the helper function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}
