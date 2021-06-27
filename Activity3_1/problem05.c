/* Write a recursive function power(nase, exponent) that when invoked returns base^^exponent
 * Author; Dexter Gomez*/

#include <stdio.h>

int power(int base, int exponent);

int main(void)
{	
	int base, exponent;
	printf("Introduce base and exponent: ");
	scanf("%d %d",&base, &exponent);

	printf(": %d\n", power(base, exponent));

	return 0;
}

int power(int base, int exponent)
{
	if(exponent > 0)
	{
		return base * power(base, exponent-1);
	}
	else
	{
		return 1;
	}
}
