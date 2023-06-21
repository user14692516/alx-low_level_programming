#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name.
 * @name: string of the pointer to add.
 * @f: pointer to the printing function.
 * Return: NULL
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
