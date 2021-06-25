/*Create a program which prints the prime numbers divisors of other number
 *Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int main(void)
{
	int number,aux_number;
	printf(":");
	scanf("%d",&number);

	aux_number = 2;

	while(aux_number <= number)
	{
		/*---------------------------------------------------
		is_prime = 0 then the number is prime
		is_prime > 0 then the number is not prime
		*/
		int is_prime = 0;
		for(int i = 2; i < aux_number && is_prime == 0; i++)
		{
			if((aux_number%i) == 0)
			{
				is_prime++;
			}
		}
		//--------------------------------------------------

		if( is_prime == 0 && (number%aux_number) == 0 )
		{
			printf("%d  ",aux_number);
			number = number / aux_number;
			aux_number = 2;
			continue;
		}

		aux_number++;
	}
	printf("\n");
	return 0;
}
