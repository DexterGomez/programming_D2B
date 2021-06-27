/* Write a program to count the digits of a number given using recursive function
 * Author: Dexter Gomez*/

#include <stdio.h>

int digits = 1;

void number_digits(int number);

int main(void)
{
	int number;
	printf("Insert a number: ");
	scanf("%d",&number);

	number_digits(number);

	printf(": %d\n",digits);

	return 0;
}

void number_digits(int number)
{
	if(number > 10)
	{
		digits++;
		number_digits(number/10);
	}
}
