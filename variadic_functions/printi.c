#include "variadic_functions.h"
/**
 * printi - print integer
 * @par: parameter
 */
void printi(va_list par)
{
	printf("%d", va_arg(par, int));
}
