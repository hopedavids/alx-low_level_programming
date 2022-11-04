#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vector holding the values
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
