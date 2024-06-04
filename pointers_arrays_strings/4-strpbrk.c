#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive caracters of s1 that are in s2.
 *
 * Return: new string.
 */
char *_strpbrk(char *l, char *accept)
{
	unsigned int i, k;

	for (i = 0; *(l + i); i++)
	{
		for (k = 0; *(accept + k); k++)
		{
			if (*(l + i) == *(accept + k))
			{
				break;
			}
		}
		if (*(accept + k) != '\0')
		{
			return (l, + i);
		}
	}
	return (0);
}
