#include "variadic_functions.h"
/**
 * printc - print charachter
 * @par: parameter
 *
 */
void printc(va_list par)
{
	printf("%c", va_arg(par, int));
}
