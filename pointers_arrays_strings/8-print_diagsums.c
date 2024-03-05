#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 * @a: first array
 * @size: second array
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int diag1 = 0;
int diag2 = 0;

for (i = 0; i < size; i++)
{
	diag1 += a[(size + 1) * i];
}
for (j = 0; j < size; j++)
{
	diag2 += a[(size - 1) * (j + 1)];
}
printf("%d, %d\n", diag1, diag2);
}
