#include "variadic_functions.h"
#include "printc.c"
#include "printfloat.c"
#include "prints.c"
#include "printi.c"

/**
 * print_all - print all kind of types
 * @format: input types
 */
void print_all(const char * const format, ...)
{
int i, j;
char *separator = "";
va_list par;

type style[] = {
	{'c', printc},
	{'i', printi},
	{'f', printfloat},
	{'s', prints}
};

va_start(par, format);

i = 0;
	while (format && format[i])
	{
		j = 0;
		while (style[j].t)
		{
			if (style[j].t == format[i])
			{
				printf("%s",  separator);
				style[j].f(par);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
va_end(par);
printf("\n");
}
