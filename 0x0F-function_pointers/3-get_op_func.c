#include "3-calc.h"

/**
 * get_op_func - entry point
 * @s: argument one
 * Return: on success
 */

int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == *(ops[i]).op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
