#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * jack_bauer - show every minute from 00:00 to 23:59
 * Return: 0 if code ok
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf ("%d",n);
			n--;
		}


	
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf ("%d", n);
			n++;
		}
	}
}
