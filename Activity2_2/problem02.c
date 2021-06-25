/*Write a program that reads an integer and determines and prints how many digits in the integer are 5s.
 *Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int main(void)
{	
	int num_input, aux, num_5s = 0;

	printf(":");
	scanf("%i",&num_input);

	while(num_input > 0)
	{
		if( (num_input%10) == 5 )
		{
			num_5s = num_5s + 1;
		}
		
		num_input = num_input / 10;
	}

	if(num_5s > 0)
	{
		printf(": %i\n",num_5s);
	}
	else
	{
		printf("no 5s\n");
	}

	return 0;
}
