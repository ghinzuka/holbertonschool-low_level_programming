#include "variadic_functions.h"
/**
 * prints - print a string
 * @par: parameter
 */
void prints(va_list par)
{
	char *s;
	s = va_arg(par, char*);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
