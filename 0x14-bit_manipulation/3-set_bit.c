#include "main.h"

/**
 * set_bit - sets a bit of a  given index to 1.
 * @n: the pointer to the number to be changed.
 * @index: index of the bit will be set to 1
 *
 * Return: 1 for success
 * otherwise -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

