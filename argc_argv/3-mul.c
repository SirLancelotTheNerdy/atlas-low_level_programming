#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int fn;
	int sn;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	fn = atoi(argv[1]);
	sn = atoi(argv[2]);
	printf("%d\n", fn * sn);
	return (0);
}
