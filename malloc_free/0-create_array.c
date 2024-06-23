#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array,
 *
 * @size: input size
 * @c: initual char
 *
 * Return: pointer of array, or NULL.
 */

char *create_array(unsigned int size, char c)

{
	char *arr = NULL;
	unsigned int i;

	arr = (char *) malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
