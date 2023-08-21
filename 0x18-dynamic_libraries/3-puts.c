#include "main.h"
/*
 * _puts - printing a string followed by a new line.
 * @str :string that is supposed to be printed.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
