/* Write a funciton integerPower(base,exponent) that returns the value of base^exponent
 * Author: Dexter Gomez */

#include <stdio.h>

int integerPower(int base, int exponent);

int main(void)
{
	int base,exponent;
	printf("base: ");
	scanf("%d",&base);
	printf("exponent: ");
	scanf("%d",&exponent);
	
	printf("\n: %d\n",integerPower(base,exponent));

	return 0;
}

int integerPower(int base, int exponent)
{
	int result;

	if(exponent == 0)
	{
		result = 1;
	}
	else
	{
		result = base * integerPower(base, (exponent - 1));
	}

	return result;
}
