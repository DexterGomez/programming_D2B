/*By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*Author: Dexter Enrique Gómez Ek*/
#include <stdio.h>

int main(void)
{
	int auxiliar = 0, previous = 0, sum_fib = 0 ;
	int fibonacci_number = 1; 

	for (int i = 1; fibonacci_number < 4000000; i++)
	{
		auxiliar = fibonacci_number;
		fibonacci_number = fibonacci_number + previous;
		previous = auxiliar;	
		
		if( (fibonacci_number%2) == 0)
		{
			sum_fib = sum_fib + fibonacci_number;	
		}
	}
	printf (": %d\n",sum_fib);
	
	return 0;
}
