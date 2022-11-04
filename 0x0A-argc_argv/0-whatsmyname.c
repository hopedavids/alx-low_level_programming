#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vector holding the values
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
