#include "main.h"

/**
 * main - entry point
 * @argc: int variable
 * @argv: char point variable
 * Return: on success
 */

int main(int argc, char *argv[])
{
	int i = -1;

	while (argc--)
		i++;
	printf("%d\n", i);

	return (0);
}
