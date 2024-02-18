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

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)calloc(width, sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);

			free(ptr);
			return (NULL);
		}
	}

	return (ptr);
}


