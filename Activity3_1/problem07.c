/* Write a program to convert a decimal number to binary using a recursive function
 * Author: Dexter Gomez*/

#include <stdio.h>

long decimal_to_binary(long number);

int main(void)
{
	long number;
	scanf("%ld",&number);

	printf(": %ld \n",decimal_to_binary(number));

	return 0;
}

long decimal_to_binary(long number)
{
	if(number == 0)
	{
		return 0;
	}
	else
	{
		return (number % 2) + 10 * decimal_to_binary(number/2);
	}
}
