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

	printf("Size of a char: %d byte(s)\n",(int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n",(int) sizeof(long int));
	printf("Size of a long long int:  %d byte(s)\n",(int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n",(int) sizeof(float));
	return (0);
}