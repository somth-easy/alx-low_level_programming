#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints with write function
 *
 * Return: 1 Always
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);

	return (1);
}
