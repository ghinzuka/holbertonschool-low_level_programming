#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - Write a function that returns the sum
 * @n: numbers of parameters
 * Return: sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	int s = 0;
	int p = 0;

if (n != 0)
{
	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(par, int);
		s += p;
	}
	va_end(par);
	return (s);
}
else
{
	return (0);
}
}
