#include "main.h"
#include <stdio.h>

/**
 * main - Program that multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index++; )
	{
		multiplication = multiplication *_atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
