#include "main.h"

/**
 * alloc_grid - entry point
 * @width: int variable
 * @height: int variable
 * Return: on success
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width == 0 && height == 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc (sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for(j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
		}
	}
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}


