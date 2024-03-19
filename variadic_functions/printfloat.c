#include "variadic_functions.h"
/**
 * print_f - print float
 * @par: par
 *
 */
void printfloat(va_list par)
{
	printf("%f", va_arg(par, double));
}
