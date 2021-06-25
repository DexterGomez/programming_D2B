/*Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int main(void)
{
	
	int sum_squares = 0;
	int sum_nat_n = (100*101)/2;
	
	for(int i = 1; i < 101; i++)
	{
		sum_squares = sum_squares + (i*i);
	}

	printf(":%d\n",( (sum_nat_n*sum_nat_n) - sum_squares ));

	return 0;
}
