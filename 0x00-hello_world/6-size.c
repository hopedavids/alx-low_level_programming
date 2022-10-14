#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	int x;
	long int p;
	long long int q;
	float y;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
	return (0);
}
