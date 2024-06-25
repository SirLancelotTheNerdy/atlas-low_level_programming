#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, length;

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
	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';

	return (new_str);
}
