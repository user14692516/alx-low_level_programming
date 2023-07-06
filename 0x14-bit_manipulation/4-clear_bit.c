#include "main.h"

/*
 * clear_bit - setting a value of a bit.
 * @n: pointer.
 * @index: index.
 *
 * Return: 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
