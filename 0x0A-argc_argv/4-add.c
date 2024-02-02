#include "main.h"

/**
 * main - entry point
 * @argc: int variable
 * @argv: char pointer variable
 * Return: on success
 */

int main(int argc, char *argv[])
{
	int retval = 0;

	if ((argc - 1) == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	argc -= 1;

	while (argc >= 1)
	{
		retval += atoi(argv[argc]);
		if (((argv[argc][0] >= 'a') && (argv[argc][0] <= 'z')) ||
		((argv[argc][0] >= 'A') && (argv[argc][0] <= 'Z')))
			break;
		argc--;
	}
	if (argc == 0)
		printf("%d\n", retval);

	if (argc > 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

