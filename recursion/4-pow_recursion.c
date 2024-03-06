#include "main.h"
/**
 * _pow_recursion - function that returns the value of x to y
 *@x: first int
 *@y: second int
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
	res = (x * _pow_recursion(x, y - 1));
	}
return (res);
}
