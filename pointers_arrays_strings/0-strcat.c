#include "main.h"
/**
 * _strcat - + src to dest.
 *
 * @dest: both string together.
 * @src: depending the size of dest it adds letters.
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int l;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{}
	for (l = 0; src[l] != '\0'; l++)
	{
		dest[dest_len + l] = src[l];
	}
	return (dest);
}
