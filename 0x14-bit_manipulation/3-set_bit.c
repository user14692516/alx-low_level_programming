#include "main.h"

/*
 * set_bit - setting s bit.
 * @n: pointer to a number.
 * @index: index.
 *
 * Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
