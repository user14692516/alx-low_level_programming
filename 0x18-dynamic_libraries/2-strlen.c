#include "main.h"
/*
 * _strlen - returns string length.
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
