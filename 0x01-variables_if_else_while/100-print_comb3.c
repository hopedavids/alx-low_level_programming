#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: print out different combinations of two digits
 * 1 two digits each separted by ,
 * 2 print only the smaller combination of digit in ascending order
 * 3 
 * Return: Always 0 for Success
 */

int main(void) {
	
	int comb3;
	int d;

	for (comb3 = '0'; comb3 < '9'; comb3++) { /*the first count 0 - 9 */
	
		for (d = comb3+1; d <= '9'; d++) /* the second count adding +1 to each integer */
		{
			if (d != comb3) 
			{
				putchar(comb3); 
				putchar(d);

				if (d == '8' && comb3 == '9')
				
					continue;
				

				putchar(',');
				putchar(' ');

			

			}

		}	

	
	 }
	 putchar('\n');

	 return (0);
}
