#include "main.h"
#include <stdlib.h>

/*
 * create_array - creates an array of chars, and inits it with a specific char.
 * @size: size of array
 * @c: character to assign
 * Description: creat array of size and assign character c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
	return (NULL);
	}
	/*Defines value with malloc*/
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
	return (NULL);
	}
	else
	{
	position = 0;
	while (position < size) /*While for array*/
	{
	*(buffer + position) = c;
	position++;
	}
	return (buffer);
	}
}
