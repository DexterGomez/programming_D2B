/* Write a program that given a character returns its ASCII value. Hint: Check the following string format: %d and %c.
 * Author: Dexter Gomez */

#include <stdio.h>

int main()
{
	char character;

	//Input: a character
	printf("Insert a unique character: ");
	scanf("%c",&character);
	
	//Out put: ASCII value of the character
	printf("Output: %d\n",character);

	return 0;
}
