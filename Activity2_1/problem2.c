/* Author: Dexter Enrique Gómez Ek
 * Date: May 27, 2021
 * Instructions: Write a program that given a character determines if it is: 'alphabet','digit' or 'special character'. */

#include <stdio.h>

int main()
{
	char input;
	printf("Introduce a character: ");
	scanf("%c",&input);

	if( (input >= 65 && input <= 90) || (input  >= 97 && input <= 122) )
	{
		printf("alphabet\n");
	}
	else if(input >= 48 && input <= 57)
	{
		printf("digit\n");
	}
	else
	{
		printf("special character\n");
	}

	return 0;
}
