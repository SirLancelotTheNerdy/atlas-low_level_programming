#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char.
 *
 * Return: new string.
 */
char *_strchr(char *l, char c)
{
	while (*l != '\0')
	{
		if (*l == c)
		{
			return (l);

		}
		else
			l++;
	}
	if (*l == c)
		return (l);
	else
		return (0);
}
