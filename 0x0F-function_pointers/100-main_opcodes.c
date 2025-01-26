#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: the number of arguments passed
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *pointer = (char *)main;
	int size;

	if (argc != 2)
		printf("Error\n"), exit(1);
	size = atoi(argv[1]);
	if (size < 0)
		printf("Error\n"), exit(2);

	while (size--)
		printf("%02hhx%s", *pointer++, size ? " " : "\n");
	return (0);
}
