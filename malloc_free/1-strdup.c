#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - allocates space in memory.
 *
 * @str: given string
 *
 * Return: returns a pointer to memory
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int l, length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < length; l++)
	{
		new_str[l] = str[l];
	}
	new_str[ll = '\0';

	return (new_str);
}
