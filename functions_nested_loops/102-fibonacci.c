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
	int a = 1;

	for (i = 0; i < 51; i++)
	{
		resultat = a + resultat;
		printf("%d, ", resultat);
		a = resultat - a; 
	
	}

	return (0);
}
