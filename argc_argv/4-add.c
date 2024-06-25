#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int index, digitIndex, totalSum = 0;

	unsigned int numberOfArguments = argc;

	for (index = 1; index < numberOfArguments; index++)
	{
		for (digitIndex = 0; argv[index][digitIndex] != '\0'; digitIndex++)
		{
			if (!isdigit(argv[index][digitIndex]))
			{
				printf("Error\n");

				return (1);
			}
		}
		totalSum += atoi(argv[index]);
	}
	printf("%d\n", totalSum);

	return (0);
}
