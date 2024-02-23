#include <stdio.h>

/**
 * main - Lists all multiples of 3 or 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int resultat = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			resultat = i;
		}
	}

	printf("%d\n", resultat);

	return (0);
}
