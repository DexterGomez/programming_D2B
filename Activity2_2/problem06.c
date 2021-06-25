/*Write a program that convert a decimal number to Roman numerals. The largest number that can be represented in this notation is 3,999.
 *Author: Dexter Enrique Gomez Ek*/

#include <stdio.h>

int main(void)
{
	int decimal_number,aux = 0;

	do
	{
		if(aux > 0)
		{
			printf("The number must be less than 4000...\n");
		}
			
		printf(":");
		scanf("%i",&decimal_number);

		aux++;
	}
	while(decimal_number > 3999);

	int units = decimal_number % 10;
	decimal_number = decimal_number / 10;

	int dozens = decimal_number % 10;
	decimal_number = decimal_number / 10;

	int hundreds = decimal_number % 10;
	decimal_number = decimal_number / 10;

	int thousands = decimal_number % 10;
	
	switch(thousands)
	{
		case 1: printf("M"); break;
		case 2: printf("MM"); break;
		case 3: printf("MM"); break;
	}

	switch(hundreds)
	{
		case 1: printf("C"); break;
		case 2: printf("CC"); break;
		case 3: printf("CCC"); break;
		case 4: printf("CD"); break;
		case 5: printf("D"); break;
		case 6: printf("DC"); break;
		case 7: printf("DCC"); break;
		case 8: printf("DCCC"); break;
		case 9: printf("CM"); break;
	}

	switch(dozens)
	{
		case 1: printf("X"); break;
		case 2: printf("XX"); break;
		case 3: printf("XXX"); break;
		case 4: printf("XL"); break;
		case 5: printf("L"); break;
		case 6: printf("LX"); break;
		case 7: printf("LXX"); break;
		case 8: printf("LXXX"); break;
		case 9: printf("XC"); break;
	}

	switch(units)
	{
		case 1: printf("I"); break;
		case 2: printf("II"); break;
		case 3: printf("III"); break;
		case 4: printf("IV"); break;
		case 5: printf("V"); break;
		case 6: printf("VI"); break;
		case 7: printf("VII"); break;
		case 8: printf("VIII"); break;
		case 9: printf("IX");
	}

	printf("\n");

	return 0;
}
