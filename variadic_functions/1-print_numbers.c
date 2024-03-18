#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed
 * @n: the number of integers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int p;
	va_list par;

		va_start(par, n);

		for (i = 0; i < n; i++)
		{ 
			p = va_arg(par, int);
			printf("%i", p);
			if ( separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(par);

	printf("\n");
}
