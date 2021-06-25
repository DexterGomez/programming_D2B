/* Author: Dexter Enrique Gomez
 * Date: May 27, 2021
 * Instructions: Write a program that given the amount of electrical energy consumed, returns the total amout the customer has to pay according the rules specified in the pdf */

#include <stdio.h>

int main(void)
{
	int kwh_consumed;

	printf("Insert the kWh consumed: ");
	scanf("%d",&kwh_consumed);

	float rate, amount_charges, total;
	float surcharges = 0;

	if(kwh_consumed < 200)
	{
		rate = 1.2;
	}
	else if(kwh_consumed >= 200 && kwh_consumed < 400)
	{
		rate = 1.5;
	}
	else if(kwh_consumed >= 400 && kwh_consumed < 600)
	{
		rate = 1.8;
	}
	else
	{
		rate = 2.0;
	}

	amount_charges = kwh_consumed * rate;

	if(amount_charges < 100)
		amount_charges = 100;
	if(amount_charges > 400)
		surcharges = amount_charges * 0.15;

	total = amount_charges + surcharges;

	printf("Consumption: %d\nRate: %.2f\nAmount charges: %.2f\nSurcharges: %.2f\nTotal: %.2f\n",kwh_consumed,rate,amount_charges,surcharges,total);

	return 0;
}
