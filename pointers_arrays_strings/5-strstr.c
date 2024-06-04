#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 *
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}

int coincidence(char *b, char *a)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}

	if (*a == '\0')
		return (1);
	else
		return (0);
}
