/*Write a program that sums a sequence of integers. Assume that the first integer read with scanf specifies the number of values remaining to be entered. The program should read only one value each time scanf is executed.
 *Author: Dexter ENrique Gómez Ek*/

#include <stdio.h>

int main(void)
{
	int n_inputs;
	int input, result = 0;
	scanf("%d",&n_inputs);

	while(n_inputs > 0)
	{	
		scanf("%d",&input);
		result = result + input;
		n_inputs--;
	}

	printf(":%d\n",result);
	return 0;
}
