#include "main.h"
/**
 * rev_string - print reversed string,then a new line
 * 
 * Return: void
*/

void rev_string(char *s)
{

int l, i, hf;
char temp;

for (l = 0; s[len] != '\0'; l++)
;

i = 0;

hf = l / 2;

while (hf--)
{
	temp = s[l - i - 1];
	s[l - i - 1] = s[i];
	s[i] = temp;
	i++;
}

}
