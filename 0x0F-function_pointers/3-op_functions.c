#include "3-calc.h"

/**
 * op_add - adds two values
 * @a: value one
 * @b: value two
 * Return: sum of values
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - minuses b from a
 * @a: value one
 * @b: value two
 * Return: returns the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a and b
 * @a: value one
 * @b: value two
 * Return: returns multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides value a by b
 * @a: value one
 * @b: value two
 * Return: returns how many times b goes into a
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - divides two values
 * @a: value one
 * @b: value two
 * Return: returns the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
