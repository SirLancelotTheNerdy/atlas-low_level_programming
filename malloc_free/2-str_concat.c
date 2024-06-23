#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer  to allocated space or to NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int l, length, s2len;

	length = 0;
	s2len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length] != '\0')
	{
		length++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	new_str = malloc(sizeof(char) * (length + s2len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	l = 0;

	for (; l < length + s2len; l++)
	{
		if (l < length)
		{
			new_str[l] = s1[l];
		}
		else
		{
			new_str[l] = s2[l - length];
		}
	}
	new_str[length + s2len] = '\0';
	return (new_str);
}
