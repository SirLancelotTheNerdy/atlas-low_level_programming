#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - creates an array
 * @min: first intput parameter
 * @max: second input parameter
 *
 * Return: 0 when its done
 */

int *array_range(int min, int max)
{
	int *ar, index, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	ar = malloc(sizeof(int) * length);

	if (ar == NULL)
		return (NULL);

	index = 0;

	while (index < length)
	{
		ar[index] = min + index;
		index++;
	}
	return (ar);
}
