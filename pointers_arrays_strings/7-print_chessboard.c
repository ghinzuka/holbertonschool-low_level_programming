#include "main.h"
/**
 * print_chessboard - write a function that prints the chessboard
 * @a: first variable
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		j = 0;

		for (j = 0; j < 8; j++)
		{
		_putchar(a[i][j]);
		}
	_putchar('\n');
	}	
}
