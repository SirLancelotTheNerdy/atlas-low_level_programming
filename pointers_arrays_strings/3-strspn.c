#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 *
 * Return: new string.
 */
unsigned int _strspn(char *l, char *accept)
{
	unsigned int i, k;

	for (k = 0; *(l + k); k++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(l + k) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (k);
}
