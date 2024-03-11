#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int j = 0;
	int i = 0;
	int **b = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	b = (int **) malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		b[i] = (int *) malloc(height * sizeof(int));
		if (b[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			b[i][j] = 0;
		}
	}
return (b);
}
