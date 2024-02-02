#include "main.h"

/**
 * main - entry point
 * @argc: int variable
 * @argv: char pointer variable
 * Return: on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);

	return (0);
}
