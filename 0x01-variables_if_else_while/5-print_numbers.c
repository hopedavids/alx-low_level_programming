#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: This program prints all single digits of base 10 startubg from 0
 *
 * Return: Always 0 for success
 *
 */

int main(void){
	
	int b10;

	for(b10 = 0; b10 < 10; b10++){
		printf("%d", b10);
	}
	printf("\n");
	return (0);
}
