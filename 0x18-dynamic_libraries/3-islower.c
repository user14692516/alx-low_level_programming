#include "main.h"
/*
 * _islower - checking for a lowercase character.
 * @c: character that is supposed to be checked
 * Return: 1 for a lowercase character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
