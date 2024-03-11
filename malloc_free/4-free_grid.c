#include "main.h"
/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 * Return: fail if fail
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
