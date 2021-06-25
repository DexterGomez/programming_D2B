/* Write a program that given a number of days, returns the amounts of years, weeks and days*/

#include <stdio.h>

int main()
{
	unsigned int days;
	int weeks = 0;
	int years = 0;

	printf("Introduce the numbers of days: ");
	scanf("%d",&days);

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

	printf("Years: %i\nWeeks: %i\nDays: %i\n",years,weeks,days);

	return 0;
}
