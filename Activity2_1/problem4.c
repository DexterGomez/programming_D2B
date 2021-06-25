/* Author: Dexter Enrique Gómez Ek
 * Date: May 27,2021
 * Instructions: Write a program that reads three nonzero float values and determines and prints if they could represent the sides of a right triangle. In the case of a right triangle print 1, otherwise print 0.*/

/* Pitagoras theorem was used */

#include <stdio.h>

int main(void)
{
	float n1,n2,n3;
	printf("Insert three nonzero numbers: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	float a,b,c;

	if(n1 > n2 && n1 > n3)
	{
		c = n1;
		a = n2;
		b = n3;
	}
	else if(n2 > n1 && n2 > n3)
	{
		c = n2;
		a = n1;
		b = n3;
	}
	else if(n3 > n1 && n3 > n2)
	{
		c = n3;
		a = n1;
		b = n2;
	}
	else
		printf("0\n");

	if( ((a*a)+(b*b)) == (c*c) )
	{
		printf("1\n");
	}
	else
		printf("0\n");

	return 0;
}
