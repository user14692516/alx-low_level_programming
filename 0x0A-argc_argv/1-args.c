#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed by the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}

