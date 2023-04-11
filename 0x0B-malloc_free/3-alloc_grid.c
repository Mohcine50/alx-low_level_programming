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
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int *)malloc(width * sizeof(int*));
	if (!arr)
	{
		return (NULL);
	}

	ptr = arr;

	for (i = 0; i < height ; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(i));
		if (!arr[i])
		{
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}

	}

	return (ptr);
}
