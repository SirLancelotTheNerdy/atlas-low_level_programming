#include "main.h"
/**
 *_strncat - function that concatenates two strings. 
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, l;


	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (l = 0; l < n && src[l] != '\0'; l++, length++)
	{
		dest[length] = src[l];
	}
	dest[length] = '\0';
	return (dest);
}
