/* Write a program that given a number of days, returns the amounts of years, weeks and days
 * Author: Dexter Gomez */

#include <stdio.h>

int main()
{
	//variables
	unsigned int days;
	int weeks = 0;
	int years = 0;

	//input
	printf("Introduce the numbers of days: ");
	scanf("%d",&days);

	//program calculations
	while(days > 364)
	{
		days = days - 365;
		years++;
	}
	while(days > 6)
	{
		days = days - 7;
		weeks++;
	}

	//output
	printf("Years: %i\nWeeks: %i\nDays: %i\n",years,weeks,days);

	return 0;
}
