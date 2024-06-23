#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr = malloc(sizeof(int *) * height);
	int l, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < height; l++)
	{
		arr[l] = malloc(sizeof(int) * width);
		if (arr[l] == NULL)
		{
			for (k = 0; k < l; k++)
			{
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (k = 0; k < width; k++)
		{
			arr[l][k] = 0;
		}
	}
	return (arr);
}
