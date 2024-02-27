#include "main.h"
/**
 *
 *
 *
 *
 */
void rev_string(char *s)
{
int i = 0;
int len = 0;
int j =0;
char c;

	while (s[len])
	{
	len++;
	}

	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
