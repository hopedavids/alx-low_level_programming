#include "main.h"

/**
 * _strlen - the name of the function
 * @s: the parameter inside the function
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
