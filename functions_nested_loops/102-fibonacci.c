#include <stdio.h>

/**
 * main - print tbhe first digits of the fibonacci sequence
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
long int resultat = 0;
long int a = 1;
long int b = 2;

printf("%lu, ", a);
printf("%lu, ", b);

	for (i = 3; i < 51; i++)
	{
		resultat = a + b;
		printf("%lu, ", resultat);
		a = b;
		b = resultat;
	}

	return (0);
}
