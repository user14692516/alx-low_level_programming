#include "3-calc.h"

/**
 * op_add - adds two integers 
 * @a: first number.
 * @b: second number.
 * Return: cumulative  sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: product of a and b

int op_mul(int a, int  b)
{
	return (a * b);
}

/**
 * op-div - divides two integers
 * @a: first number
 * @b: second number
 * Return: divison of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
