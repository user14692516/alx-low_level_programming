#include "main.h"
/*
 * _memset - filing a memory block with a certain value.
 * @s: starting address.
 * @b: desired value
 * @n: numer of chanageable bytes.
 * Return: new value of n in a changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
