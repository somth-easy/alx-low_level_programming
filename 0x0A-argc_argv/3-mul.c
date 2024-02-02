#include "main.h"

/**
 * main - entry point
 * @argc: int variable
 * @argv: char pointer variable
 * Return: on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", i);

	return (0);
}
