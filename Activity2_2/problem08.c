/*A divisor of a number N is a number which can exactly divide that integer exactly for example the divisors of 24 are 1, 2, 3, 4, 6, 8, 12, 24. Write a program to print the Divisor of a given numbers N and write its pseudocode. For example, if the input of the algorithm is 24, the output must be 1 2 3 4 6 8 12 24.
 *Author: Dexter Enrique Gómez Ek */

#include <stdio.h>

int main(void)
{
	int N;
	printf(":");
	scanf("%d",&N);

	for(int i = 1; i <= N; i++)
	{
		if( (N%i) == 0 )
		{
			printf("%i ",i);
		}
	}

	printf("\n");
	return 0;
}
