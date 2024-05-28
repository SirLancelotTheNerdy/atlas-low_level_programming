#include "main.h"

/**
 * *_strcpy copies the string pointed to by src
 *  Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dst`
 * Return: Pointer to `dst`
 */

char *_strcpy(char *dst, char *src)
{
	int i = -1;

	do {
		i++;
		dst[i] = src[i];
	} while (src[i] != '\0');

	return (dst);
}
