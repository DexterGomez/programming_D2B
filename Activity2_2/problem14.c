/*Find the sum of all the multiples of 3 or 5 below 1000.
*Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int main(void)
{
	int total = 0;

	for (int i = 0; i < 1000; i++)
	{
		if( i%3 == 0 || i%5 == 0) 
		{
			total = total + i;
		}
	}

	printf("%d\n",total);

	return 0;
}
