#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocate memory of an array by the use of malloc.
  * @nmemb: elements in an array.
  * @size: size of array elements.
  *
  * Return: Pointer to allocated elements.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}

