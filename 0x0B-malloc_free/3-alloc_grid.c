#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers.
  *@width: input row
  *@height: input col
  *Return: int
  */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*using typecasting (int *) to dereference values*/
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i >= 0)
				free(arr[i--]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
