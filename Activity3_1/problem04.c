/* Write a function that takes an integer value and returns the number with its digits reversed
 * Author: Dexter Gomez*/

#include <stdio.h>

void reversed(char *num);

int main(void)
{
	char num[20];
	printf("Introduce a number: ");
	fflush(stdin);
	fgets(num, 20, stdin);

	reversed(num);

	return 0;
}

void reversed(char *num)
{
	for(int i = sizeof(num); i >= 0; i--)
	{
		printf("%c",num[i]);
	}
	printf("\n");
}
