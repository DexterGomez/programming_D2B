/* Write a function perfect that determines if parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000
 * Author: Dexter Gomez*/

#include <stdio.h>

void perfect_number(int number);

int main(void)
{
	for(int i = 1 ; i <= 1000 ; i++)
	{
		perfect_number(i);
	}

	return 0;
}

void perfect_number(int number)
{
	int suma = 0;
	for(int i = 1 ; i < number ; i++)
	{
		if(number%i == 0)
		{
			suma = suma + i;
		}
	}

	if(suma == number)
	{
		printf("%4d\n",number);
	}
}
