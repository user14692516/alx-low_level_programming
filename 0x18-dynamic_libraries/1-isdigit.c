#include "main.h"
/*
 * _isdigit - checking if the character is a digit.
 * @n: number.
 * Return: 1 
 * Otherwise -1
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
