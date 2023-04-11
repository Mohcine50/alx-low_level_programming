#include "stdio.h"
#include "stdlib.h"

/**
 * alloc_grid - allocate 2 dimensional array
 * @width: integer
 * @height: integer
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(width * sizeof(int *));

	if (!arr)
	{
		return (NULL);
	}


	for (i = 0; i < height ; i++)
	{
		arr[i] = malloc(width * sizeof(int *));
		if (!arr[i])
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}

	}

	return (arr);
}
