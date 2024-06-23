#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: destination string
 * @s2: given string
 * @n: the number of bytes from s2
 * Return: desired string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, index;

	if (s1 == NULL)
		len1 = 0;
	else
		for (len1 = 0; s1[len1]; ++len1)
			;
	if (s2 == NULL)
		len2 = 0;
	else
		for (len2 = 0; s2[len2]; ++len2)
			;
	if (len2 > n)
		len2 = n;
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (index = 0; index < len1; index++)
		result[index] = s1[index];
	for (index = 0; index < len2; index++)
		result[len1 + index] = s2[index];
	result[len1 + len2] = '\0';
	return (result);
}
