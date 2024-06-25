#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that has a parameter
 * for each element of the array
 *
 * @array: array to iterate
 * @size: size of array
 * @action: the pointer function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
