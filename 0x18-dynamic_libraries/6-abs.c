#include "main.h"
/*
 * _abs - calculating the absolute value of an integer
 * @c: number to be calculated
 * Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
