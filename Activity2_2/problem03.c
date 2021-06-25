/*Write a program that reads a nonnegative integer and computes and prints its factorial.
 *Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int main(void)
{
	unsigned int number;

	printf("Introduce a non negative integer: ");
	scanf("%d",&number);

	int result = number;
	while(number > 1)
	{
		result = result * (number -1);
		number--;
	}

	printf("%d\n",result);

	return 0;
}
