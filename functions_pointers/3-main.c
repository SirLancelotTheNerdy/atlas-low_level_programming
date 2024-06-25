#include "3-calc.h"
/**
 * main - how the operation is used.
 *
 * @argc: number of argument.
 * @argv: the arguement it is looking for.
 *
 * Return: 0 if 2 positive int are entered.
 */
int main(int argc, char *argv[])
{
    int l, g; 

    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    l = atoi(argv[1]);
    g = atoi(argv[3]);

    func = get_op_func(argv[2]);
    if (func == NULL)
    {
        printf("Error\n");
        return (99);
    }

    printf("%d\n", func(l, g)); 

    return (0);
}
