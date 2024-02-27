#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument names
 * Return: on success
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if (atoi(argv[3]) == 0)
	{
		printf("Enter\n");
		return (100);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
