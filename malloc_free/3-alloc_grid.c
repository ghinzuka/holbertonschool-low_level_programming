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
	int **b = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	b = (int **) malloc(height * sizeof(int *));
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		b[i] = (int *) malloc(width * sizeof(int));
		if (b[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(b[j]);
			}
			free(b);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			b[i][j] = 0;
		}
	}
return (b);
}
