#include <unistd.h>

/*
 * _putchar - writes the character c
 * @c: The printable character.
 *
 * Return: Success
 * Otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
