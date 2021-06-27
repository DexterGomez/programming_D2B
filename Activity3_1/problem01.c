/* Write a program that defines four functions to round a number x in various ways
 * Author: Dexter Gomez */

#include <stdio.h>
#include <math.h>

int roundToInteger(float number);

int roundToTenths(float number);

int roundToHundreths(float number);

int roundToThousandths(float number);


int main(void)
{	
	float input;
	scanf("%f",&input);

	printf(": %d  %d  %d  %d\n",roundToInteger(input),roundToTenths(input),roundToHundreths(input),roundToThousandths(input));

	return 0;
}

int roundToInteger(float number)
{
	return ceil(number);
}

int roundToTenths(float number)
{
	return ceil(number/10) * 10;
}

int roundToHundreths(float number)
{
	return ceil(number/100) * 100;
}

int roundToThousandths(float number)
{
	return ceil(number/1000) * 1000;
}
