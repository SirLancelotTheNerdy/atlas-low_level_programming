#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * 
 * Return: new string.
 */
char *_memset(char *l, char a, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(l + i) = a;
		i++;
	}
	return (l);
}
