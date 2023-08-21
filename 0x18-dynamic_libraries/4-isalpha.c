#include "main.h"
/*
 * _isalpha - checking for character of the alphabet
 * @c: characters that are supposed to be checked.
 * Return: 1 for alphabetic character
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
