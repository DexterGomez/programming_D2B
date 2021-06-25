/* Author: Dexter Enrique Gómez Ek
 * Date: May 27, 2021
 * Description: Write a program that given a letter determines if it is a vowel or consonant.*/

#include <stdio.h>

int main(void)
{
	char input;
	printf("Insert a character: ");
	scanf("%c",&input);

	if(input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input== 'O' || input == 'u' || input == 'U')
	{
		printf("vowel\n");
	}
	else
	{
		printf("consonant\n");
	}

	return 0;
}
