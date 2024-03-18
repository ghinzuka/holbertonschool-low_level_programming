#include "variadic_functions.h"
/**
 * print_strings - that prints strings, followed by a new line.
 * @separator: separator
 * @n: arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	char *p;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(par, char*);
		if (p != NULL)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(par);

	printf("\n");
}
