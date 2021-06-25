/*
C can represent uppercase letters, lowercase letters and a considerable variety of special symbols using small integers internally to represent each different character. These values are assigned using the ASCII value representation. Write a program that given a character returns its ASCII value. Hint: Check the following string format: %d and %c.
*/

#include <stdio.h>

int main()
{
	char character;
	printf("Insert a unique character: ");
	scanf("%c",&character);

	printf("Output: %d\n",character);
	return 0;
}
