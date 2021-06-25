/*Write a program that input an integer number and print the product of its digits.
 *Author: Dexter Enrique Gomez Ek*/

#include <stdio.h>

int main()
{
	int num_input, aux = 0;
	int result = 1;

	printf(":");
	scanf("%i",&num_input);

	while(num_input > 0)
	{
		result = result * (num_input%10);
		/*
		if( (num_input%10) == 5 )
		{
			printf(".\n");
			num_5s = num_5s + 1;
		}*/
		
		num_input = num_input / 10;
	}

	printf(":%i\n",result);

	return 0;
}
